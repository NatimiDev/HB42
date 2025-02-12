rm -rf testShell00
echo "there should be 40 symbols 012345567890" > testShell00
touch -t 202406012342 testShell00
chmod 455 testShell00
tar -cf testShell00.tar testShell00
rm -rf testShell00

# to extract files use the following command
tar -xvpf testShell00.tar
