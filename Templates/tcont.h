#include <cstddef>
using namespace std;

template <class T>
class TCont{
    public:
        static const size_t SIZE = 10;
        TCont();

        void add(const T& item);

    private:
        T data[SIZE];
        size_t used;
};

#include "tcont.tcc"