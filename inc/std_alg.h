/****************************************************************************
** Copyright (c) 2019 Evgeny Teterin (nayk) <sutcedortal@gmail.com>
** All right reserved.
**
** Permission is hereby granted, free of charge, to any person obtaining
** a copy of this software and associated documentation files (the
** "Software"), to deal in the Software without restriction, including
** without limitation the rights to use, copy, modify, merge, publish,
** distribute, sublicense, and/or sell copies of the Software, and to
** permit persons to whom the Software is furnished to do so, subject to
** the following conditions:
**
** The above copyright notice and this permission notice shall be
** included in all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
** MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
** NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
** LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
** OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
** WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
#ifndef NAYK_STD_ALG_H
#define NAYK_STD_ALG_H

#include <QByteArray>

namespace nayk {
//==================================================================================================
class Algorithm
{
public:
    enum SortType { SortAsc=0, SortDesc=1 };
    enum SortAlgorithm { BubbleSort, InsertionSort, QuickSort, MergeSort };

    static void sort(QByteArray &array, SortAlgorithm sortAlg, SortType sortType = SortAsc);
    Algorithm() = delete;

private:
    static void swapElements(QByteArray &array, int index1, int index2);
    static void quickSort(QByteArray &array, int left, int right, SortType sortType);
    static void mergeSort(QByteArray &array, int left, int right, SortType sortType);
    static void merge(QByteArray &array, int l, int m, int r, SortType sortType);
    static void bubbleSort(QByteArray &array, SortType sortType);
    static void insertionSort(QByteArray &array, SortType sortType);
};
//==================================================================================================
} // namespece
#endif // NAYK_STD_ALG_H
