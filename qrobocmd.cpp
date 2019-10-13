#include "qrobocmd.h"
#include <QTimer>
QRoboCmd::QRoboCmd(QWidget *parent, Qt::WFlags flags)
    : QDialog(parent, flags)
{
  ui.setupUi(this);//lien entre nos codes et qt auto
  m_timer = new QTimer(this);
  connect (m_timer, SIGNAL(timeout()),this,SLOT(h_Timeout()));
  m_timer2 = new QTimer(this);
  connect (m_timer2, SIGNAL(timeout()),this,SLOT(h_Timeout2()));
  Msg("Demarrage de la communication avec le robot ...");
  ui.m_act4->setDisabled(true);
  ui.m_act2->setDisabled(true);
  
}

QRoboCmd::~QRoboCmd()
{
}

int t1=0,t2=0;

void QRoboCmd::on_m_act1_released()
  {
	Msg("Debut action 1");
	m_timer->start(1000);
	ui.m_act1->setDisabled(true);
	ui.m_act2->setDisabled(false);
	ui.m_quit->setDisabled(true);

  }
void QRoboCmd::on_m_act2_released()
  {

	Msg("Fin action 1");
	if(m_timer->isActive()){m_timer->stop();}
	ui.m_act1->setDisabled(false);
	ui.m_act2->setDisabled(true);
	ui.m_quit->setDisabled(false);

  }
void QRoboCmd::on_m_act3_released()
  {
	Msg("Debut action 3");
	m_timer2->start(1000);
	ui.m_act4->setDisabled(false);
	ui.m_act3->setDisabled(true);
	ui.m_quit->setDisabled(true);
  }
void QRoboCmd::on_m_act4_released()
  {
	Msg("Fin action 3");
	if(m_timer2->isActive()){m_timer2->stop();}
	ui.m_act3->setDisabled(false);
	ui.m_act4->setDisabled(true);
	ui.m_quit->setDisabled(false);
		
  }


void QRoboCmd::h_Timeout()
{
		QString s; 
		s.sprintf("Action 1 : %d secondes",++t1);
		Msg(s);
}
void QRoboCmd::h_Timeout2()
{
		QString s; 
		s.sprintf("Action 3 : %d secondes",++t2);
		Msg(s);
}