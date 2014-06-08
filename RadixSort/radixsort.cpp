#include "radixsort.h"

RadixSort::RadixSort(QWidget *parent)	: QMainWindow(parent)
	{
	ui.setupUi(this);
	valuesCount=50;
	maxValue=1000;

	for (int i=0; i<valuesCount;++i)
		{
		QSlider* slider=new QSlider();
		slider->setMaximum(maxValue);
		slider->setValue(rand()%maxValue);	
		sliders.push_back(slider);
		ui.horizontalLayout->addWidget(slider);
		}
	}



void RadixSort::on_RedButton_clicked()
	{
	sorter.sliders=sliders;
	sorter.start();
	}

RadixSort::~RadixSort()
{

}
