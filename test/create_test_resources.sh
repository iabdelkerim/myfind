#bin/sh


mkdir test_folder
cd test_folder

mkdir foo
mkdir bar
mkdir aze
mkdir aze/rty


touch toto
touch foo/foo1
touch foo/foo2
touch bar/baz
touch aze/bar
touch aze/rty/uio

echo "This is the content of file ./toto" >> toto
echo "This is the content of file ./foo/foo1" >> foo/foo1
echo "This is the content of file ./foo/foo2" >> foo/foo2
echo "This is the content of file ./bar/baz" >> bar/baz
echo "This is the content of file ./aze/bar" >> aze/bar
echo "This is the content of file ./aze/rty/uio" >> aze/rty/uio


ln -s bar/baz link_baz

ln -s ../aze/rty foo/link_bar
