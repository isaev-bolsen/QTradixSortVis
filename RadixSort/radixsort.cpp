#include "radixsort.h"

RadixSort::RadixSort(QWidget *parent)	: QMainWindow(parent)
	{
	ui.setupUi(this);
	valuesCount=30;
	maxValue=100;

	for (int i=0; i<valuesCount;++i)
		{
		QSlider* slider=new QSlider();
		slider->setValue(rand()%maxValue);	

		sliders.push_back(slider);
		ui.horizontalLayout->addWidget(slider);
		}
	}

void RadixSort::createCounters(int *data, long *counters, long N)
	{
    // i-й массив count расположен, начиная с адреса counters+256*i
	memset( counters, 0, 256*sizeof(int)*sizeof(long) ); 
	uchar *bp = (uchar*)data;
	uchar *dataEnd = (uchar*)(data + N);
	ushort i;
	while ( bp != dataEnd ) 
		{
		// увеличиваем количество байт со значением *bp
		// i - текущий массив счетчиков
		for (i=0; i<sizeof(int);i++)
			counters[256*i + *bp++]++;
		}
	}

void RadixSort::radixPass (short Offset, long N, int *source, int *dest, long *count) 
	{
    // временные переменные
	int *sp;
	long s, c, i, *cp;
	uchar *bp;
	
    // шаг 3
	s = 0; 	// временная переменная, хранящая сумму на данный момент
	cp = count;
	for (i = 256; i > 0; --i, ++cp) 
		{
		c = *cp;
		*cp = s;
		s += c;
		}

	// шаг 4
	bp = (uchar *)source + Offset;
	sp = source;
	for (i = N; i > 0; --i, bp += sizeof(int) , ++sp) 
		{
		cp = count + *bp;
		dest[*cp] = *sp;///////Здесь это надо показать
		sliders[*cp]->setValue(*sp);
		
		++(*cp);
		}
	}

void RadixSort::radixSort(int* &in,int n)
	{
	int *out = new int[n];
	long *counters = new long[sizeof(int)*256], *count;
	createCounters(in, counters, n);

	for (ushort i=0; i<sizeof(int); i++) 
		{
		count = counters + 256*i;         // count - массив счетчиков для i-го разряда

		if ( count[0] == n ) continue;    // (*** см ниже)

		radixPass (i, n, in, out, count); // после каждого шага входной и 
		std::swap(in, out);                    // выходной массивы меняются местами
		}
                          // по окончании проходов
	delete out;           // вся информация остается во входном массиве.
	delete counters;
	}

void RadixSort::on_RedButton_clicked()
	{
	int* arr;
	arr=new int[sliders.count()];
	for (int i=0; i<sliders.count() ;++i)
		{
		arr[i]=(sliders[i]->value());
		}
	radixSort(arr,sliders.count());

	delete arr;
	}

RadixSort::~RadixSort()
{

}
