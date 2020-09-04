#bin/bash

echo " "
for((i=0;i<10;i++))
do
	for((j=10-$i;j>0;j--))
	do
		printf " * "
	done
printf "\n"
done

echo "printed reverse triangle.!"
echo "APPEND to output.txt succesfull. TASK_2 completed.!"
