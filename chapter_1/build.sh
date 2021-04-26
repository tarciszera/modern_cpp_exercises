PWD=$(pwd)
if [ "$1" == "make" ]; then
    cd $2/build
    cmake ../
    make
elif [ "$1" == "run" ]; then
    cd $2/build
    ./cpp_study
elif [ "$1" == "clean" ]; then
    cd $2
    rm -r build
    mkdir build
fi

cd $PWD
