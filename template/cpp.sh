if g++ -Wno-unused-result -fmax-errors=5 -lm -Wall -Wextra -pedantic -std=c++17 -O2 -Wshadow -Wformat=2 -Wfloat-equal -Wconversion -Wlogical-op -Wshift-overflow=2 -Wduplicated-cond -Wcast-qual -Wcast-align -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC -D_FORTIFY_SOURCE=2 -fsanitize=address -fsanitize=undefined -fno-sanitize-recover -fstack-protector -DEBUG -o run code.cpp; then 
    ./run < $1  cat
    if [ -s $1x ]; then
        echo "-------------"
        cat $1x
    fi
else 
    echo "Compilation failed"; 
fi