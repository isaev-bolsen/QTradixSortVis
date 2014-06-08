#ifndef RADIXSORT_H
#define RADIXSORT_H

#include <QtWidgets/QMainWindow>
#include "ui_radixsort.h"
#include "qthread.h"
#include "ui_ASKER.h"

//class ASKER : public QDialog
//	{
//	Q_OBJECT
//
//	public:
//		ASKER(QWidget *parent);
//		~ASKER();
//		int maxValue;
//		int ValuesCount;
//	private:
//		Ui::Dialog ui;
//	};



class SorterThread : public QThread
{
	Q_OBJECT
private:
 	void createCounters(int *data, long *counters, long N);
	void radixSort(int* &in,int n);
	void radixPass (short Offset, long N, int *source, int *dest, long *count);
	
public:	
	SorterThread();
	virtual void run();
	QList<QSlider*> sliders;
	};


class RadixSort : public QMainWindow
{
	Q_OBJECT

public:
	RadixSort(QWidget *parent = 0);
	~RadixSort();
	void init(int count,int max);
public slots:
	void on_RedButton_clicked();
private:
	//ASKER* Dialog;
	int maxValue;
	int valuesCount;
	Ui::RadixSortClass ui;
    QList<QSlider*> sliders;
	int i;
	SorterThread sorter;
};
#endif // RADIXSORT_H
