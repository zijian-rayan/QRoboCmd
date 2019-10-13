#ifndef QROBOCMD_H
#define QROBOCMD_H

#include <QtGui/QDialog>
#include "ui_qrobocmd.h"
class QTimer;
class QRoboCmd : public QDialog
{
    Q_OBJECT
public:
    QRoboCmd(QWidget *parent = 0, Qt::WFlags flags = 0);
    ~QRoboCmd();
	void Msg(const QString& s)
	{
		ui.m_msg->addItem(s);
	   ui.m_msg->setCurrentRow(ui.m_msg->count() - 1);

	}
private: 
    
    Ui::QRoboCmdClass ui;
protected:
    QTimer *m_timer, *m_timer2;
public slots:
	void h_Timeout();  
	void h_Timeout2();  
	void on_m_act1_released();
	void on_m_act2_released();
	void on_m_act3_released();
	void on_m_act4_released();

};

#endif // QROBOCMD_H
