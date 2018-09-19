for i in $( seq 2 100)
do
        fname=gausslobatto${i}.txt
        sed -e 's/^/{/' -e 's/$/}/' -e '1s/^/{/' -e 's/$/,/' -e '$ s/,$/}/' -e 's/\t/,/' ${fname} > tmp_file.txt
        cp quad_template.cxx gausslobatto$i.cxx
        sed -i -e '/PASTEBELOW/r tmp_file.txt' -e '/PASTEBELOW/d' -e "s/ORDER/${i}/" gausslobatto$i.cxx 
done
rm tmp_file.txt

