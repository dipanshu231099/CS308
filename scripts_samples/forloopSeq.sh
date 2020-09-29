
for x in `seq 10` # loop through the sequence
do
	echo ${x} # print value of x
	echo cp ${x}.txt ${x}_1.txt # echo the command (will not execute it)
done

