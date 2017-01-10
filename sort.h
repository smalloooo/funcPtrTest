#ifndef SORT_H
#define SORT_H

class sort
{
public:
    sort();

    void swap(int&, int&);
    bool larger(int a, int b);
    bool smaller(int a, int b);
    void _sort(int*, int, bool (*compare)(int, int));
};

#endif // SORT_H
