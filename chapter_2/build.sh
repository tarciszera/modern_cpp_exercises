PWD=$(pwd)
if [ "$1" == "help" ]; then
    echo "usage"
    echo "./buid [--run | --clean] project path"
elif [ "$1" == "--run" ]; then
    cd $2/build
    ./cpp_study
elif [ "$1" == "--clean" ]; then
    cd $2
    rm -r build
    mkdir build
else
    cd $1/build
    cmake ../
    make
fi

cd $PWD
