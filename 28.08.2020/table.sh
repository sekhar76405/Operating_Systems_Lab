#bin/bash

echo "Enter a number : "
read key

for num in `seq 0 10`; do
	prod=`expr $key \* $num`
	echo " $key x $num = $prod"
done
