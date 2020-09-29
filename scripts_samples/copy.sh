
inDir="dir1" # input directory
outDir="dir4" # output directory
prefix="copy_" # prefix

for x in ${inDir}/*
do
	y=`basename ${x}` # get the last part of the name
	echo "Processing " ${x} # print a message
	cp ${x} ${outDir}/${prefix}${y} # copy the file, add prefix to name
done


