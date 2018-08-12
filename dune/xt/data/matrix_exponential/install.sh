for name in r8lib c8lib matrix_exponential matrix_exponential_extension
do
${CXX} -O3 -c ${name}.cpp -o ${name}.o
done
ar rcs libmatrix_exponential.a matrix_exponential_extension.o matrix_exponential.o c8lib.o r8lib.o
