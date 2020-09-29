
for x in a b c d # loop through these items
do
	echo ${x} # print value of x
	echo cp ${x}.txt ${x}_1.txt # print (echo) the command; will not execute
done

