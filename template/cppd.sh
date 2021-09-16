if g++ -Wno-unused-result -std=c++17 -static -O2 -lm -o run code.cpp; then 
    ./run < $1  cat
    if [ -s $1x ]; then
        echo "-------------"
        cat $1x
    fi
else 
    echo "Compilation failed"; 
fi