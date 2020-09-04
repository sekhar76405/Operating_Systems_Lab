#bin/bash

printf "Hello, In this script i am printing '*' trianngle\n\n\n"

for(( i=0;i<10;i++))
do

	for(( j=0;j<=$i;j++))
	do
		printf " * "
	done
printf "\n"
done
