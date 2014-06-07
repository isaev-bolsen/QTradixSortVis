#ifndef RADIXSORT_H
#define RADIXSORT_H

#include <QtWidgets/QMainWindow>
#include "ui_radixsort.h"

class RadixSort : public QMainWindow
{
	//class sorter : public QThread
	//	{
	//	Q_OBJECT
	//	protected:
	//		void run();
	//	};

	Q_OBJECT

public:
	RadixSort(QWidget *parent = 0);
	~RadixSort();
public slots:
	void on_RedButton_clicked();
private:
	void RadixSort::createCounters(int *data, long *counters, long N);
	void RadixSort::radixSort(int* &in,int n);
	void RadixSort::radixPass (short Offset, long N, int *source, int *dest, long *count);
	int maxValue;
	int valuesCount;
	Ui::RadixSortClass ui;
    QList<QSlider*> sliders;
	int i;
};

#endif // RADIXSORT_H
