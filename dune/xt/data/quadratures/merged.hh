// This file is part of the dune-xt-data project:
//   https://github.com/dune-community/dune-xt-data
// Copyright 2009-2018 dune-xt-data developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   Tobias Leibner (2019)
//
// This file is part of the dune-gdt project:

#ifndef DUNE_XT_DATA_QUADRATURES_MERGED_HH
#define DUNE_XT_DATA_QUADRATURES_MERGED_HH

#include <numeric>
#include <vector>

#include <dune/geometry/quadraturerules.hh>

namespace Dune::XT::Data {


// Takes a vector of quadratures and treats them as a single quadrature
template <class FieldType, int dimDomain>
class MergedQuadrature
{
public:
  using QuadratureType = Dune::QuadratureRule<FieldType, dimDomain>;
  using QuadPointType = Dune::QuadraturePoint<FieldType, dimDomain>;

  MergedQuadrature(const std::vector<QuadratureType>& quadratures)
    : quadratures_(quadratures)
  {}

  class MergedQuadratureIterator
  {
  public:
    MergedQuadratureIterator() = default;

    MergedQuadratureIterator(const std::vector<QuadratureType>& quadratures,
                             const size_t first_index,
                             const size_t second_index)
      : quadratures_(&quadratures)
      , first_index_(first_index)
      , second_index_(second_index)
    {
      assert(first_index_ <= quadratures_->size());
      assert(first_index == quadratures_->size() || second_index_ <= (*quadratures_)[first_index_].size());
    }

    MergedQuadratureIterator& operator++()
    {
      if (second_index_ != (*quadratures_)[first_index_].size() - 1) {
        ++second_index_;
      } else {
        // increase first_index_ until we reach either the next non-empty quadrature or the end
        while (++first_index_ < quadratures_->size() && !(*quadratures_)[first_index_].size())
          ;
        second_index_ = 0;
      }
      return *this;
    }

    MergedQuadratureIterator operator++(int)
    {
      auto ret = *this;
      ++(*this);
      return ret;
    }

    bool operator==(const MergedQuadratureIterator& other)
    {
      return (quadratures_ == other.quadratures_ && first_index_ == other.first_index_
              && second_index_ == other.second_index_);
    }

    bool operator!=(const MergedQuadratureIterator& other)
    {
      return !(*this == other);
    }

    const QuadPointType& operator*() const
    {
      return (*quadratures_)[first_index_][second_index_];
    }

    const QuadPointType* operator->() const
    {
      return &(operator*());
    }

    size_t first_index() const
    {
      return first_index_;
    }

    size_t second_index() const
    {
      return second_index_;
    }

  private:
    const std::vector<QuadratureType>* quadratures_;
    size_t first_index_;
    size_t second_index_;
  };

  using ConstIteratorType = MergedQuadratureIterator;

  ConstIteratorType begin() const
  {
    return ConstIteratorType(quadratures_, 0, 0);
  }

  ConstIteratorType end() const
  {
    return ConstIteratorType(quadratures_, quadratures_.size(), 0);
  }

  // iterator pointing to element at position ii in merged quadrature
  ConstIteratorType iterator(const size_t index) const
  {
    const auto indices = get_indices(index);
    return ConstIteratorType(quadratures_, indices[0], indices[1]);
  }

  const QuadPointType& operator[](const size_t index) const
  {
    const auto indices = get_indices(index);
    return quadratures_[indices[0]][indices[1]];
  }

  size_t size() const
  {
    return std::accumulate(
        quadratures_.begin(), quadratures_.end(), 0, [](const size_t& curr_size, const QuadratureType& quadrature) {
          return curr_size + quadrature.size();
        });
  }

private:
  FieldVector<size_t, 2> get_indices(size_t index) const
  {
    FieldVector<size_t, 2> ret{0, index};
    while (ret[0] < quadratures_.size() && ret[1] >= quadratures_[ret[0]].size())
      ret[1] -= quadratures_[ret[0]++].size();
    return ret;
  }

  const std::vector<QuadratureType>& quadratures_;
};

// Takes a vector of quadratures and
template <class FieldType, int dimDomain>
MergedQuadrature<FieldType, dimDomain>
merged_quadrature(const std::vector<Dune::QuadratureRule<FieldType, dimDomain>>& quadratures)
{
  return MergedQuadrature<FieldType, dimDomain>(quadratures);
}


} // namespace Dune::XT::Data

#endif // DUNE_XT_DATA_QUADRATURES_MERGED_HH
