#!/bin/bash

# Submitted by Dipanshu
# B18054
# Assignment 1

# ------------ Q1 -------------

echo "--------- Q1 ------------"
count=3
echo $count
echo count
((count=count+1))
echo $count
echo $NAME1
NAME1="Arun Kumar"
echo $NAME1
NAME2="Verma"
NAME3=$NAME1$NAME2
echo $NAME3 
echo $NAME1+$NAME2
echo
#--------cleaning old variables-------
unset NAME1
unset NAME2
unset NAME3

# ------------ Q2 -------------

echo "--------- Q2 ------------"
count=3
echo $count
echo count
((count=count+1))
echo $count
echo $NAME1
NAME1="4"
echo $NAME1
NAME2="6"
NAME3=$NAME1$NAME2
echo $NAME3 
echo $NAME1+$NAME2
echo
#--------cleaning old variables-------
unset NAME1
unset NAME2
unset NAME3

# ------------ Q3 -------------

echo "--------- Q3 ------------"
x=45;y=10;z=77;


if [[ ( "$x" -ge "$y" && "$x" -ge "$z" ) ]]; then
    echo "max of $x $y and $z is $x"
elif [[ ( "$y" -ge "$x" && "$y" -ge "$z" ) ]]; then
    echo "max of $x $y and $z is $y"
else 
    echo "max of $x $y and $z is $z"
fi
echo
#--------cleaning old variables-------
unset x
unset y
unset z

# ------------ Q4 -------------
echo "--------- Q4 ------------"
wc -l movies.list
cat movies.list | wc -l

# ------------ Q5 -------------
echo "--------- Q5 ------------"
echo "Using '< movies.list wc -l'"
< movies.list wc -l

# ------------ Q6 -------------
echo "--------- Q6 ------------"
entries=($(shuf -e $(seq 1 20)))
rm randomNumberList
printf "Generated random numbers: "
for i in `seq 0 19`;
do
    printf "%s\n" "${entries[i]}" >> randomNumberList
    printf "%s " "${entries[i]}"
done
printf "\n\n"

# ------------ Q7 -------------
echo "--------- Q7 ------------"
echo "sorting the above list numerically and printing output: "
sort -n randomNumberList

# ------------ Q8 -------------
echo "--------- Q8 ------------"
shuf marks.dat | sort -k 3 -n -r | head -n 3
echo

# ------------ Q9 -------------
echo "--------- Q9 ------------"
rm randomNumberList
seq 1 20 | shuf >> randomNumberList
seq 1 30 | shuf >> randomNumberList
seq 1 100 | shuf >> randomNumberList
echo "without uniq number of lines is $(cat randomNumberList | wc -l)"
sort -n randomNumberList | uniq > uniqueNumberList
echo "after uniq number of lines is $(cat uniqueNumberList | wc -l)"
echo

# ------------ Q10 -------------
echo "--------- Q10 ------------"
xargs --help
echo

# ------------ Q11 -------------
echo "--------- Q11 ------------"
echo "Current user: $(whoami)"
echo "Current user home: $(eval echo ~$(whoami))"
echo

# ------------ Q12 -------------
echo "--------- Q12 ------------"
echo Number of Items in /etc directory: `ls -1 /etc| wc -l`
echo

# ------------ Q13 -------------
echo "--------- Q13 ------------"
echo Number of Directories in /etc directory: `ls /etc -l | grep -c ^d`
echo

# ------------ Q14 -------------
echo "--------- Q14 ------------"
echo "sleeping for 5 seconds..."
sleep 5
echo

# ------------ Q15 -------------
echo "--------- Q15 ------------"
#a part
gcc factorize.c -o factorize
echo -n "Enter number to check for prime: "
read x
printf "%s\n" "$x" > randomNumberList
output=$(./factorize < randomNumberList)
second_factor=$(echo $output | cut -d ' ' -f10)
if [[ "$x" = "$second_factor" ]]; then
    echo "$x is prime number"
else
    echo "$x is not prime number"
fi

#b part
echo "time taken by program"
h=$(time ./factorize < randomNumberList)
echo

#c part
while IFS= read -r line
do
    output=$(echo $line | ./factorize)
    second_factor=$(echo $output | cut -d ' ' -f10)
    if [[ "$line" = "$second_factor" ]]; then
        echo "$line is prime number"
    else
        echo "$line is not prime number"
    fi 
done < data.txt

