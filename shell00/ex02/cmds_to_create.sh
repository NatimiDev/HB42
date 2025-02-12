# remove all files and dirs if exist
rm -rf test*

# create dirs and files
mkdir test0
echo "123" > test1
mkdir test2
echo "" > test3
echo "1234" > test4
echo "" > test5
# create a soft link
ln -s test0 test6

# set permissions
chmod 715 test0
chmod 714 test1
chmod 504 test2
chmod 404 test3
chmod 641 test4
chmod 404 test5
chmod -h 777 test6

# change date created
touch -t 202406012047 test0
touch -t 202406012146 test1
touch -t 202406012245 test2
touch -t 202406012344 test3
touch -t 202406012343 test4
touch -t 202406012344 test5
touch -t 202406012220 test6

# create tar
tar -cf exo2.tar test*
rm -rf test*

# to extract permissions correctly use
tar -xvpf exo2.tar
