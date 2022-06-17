#include "client.h"

client::client(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	socket = new QTcpSocket(this);

	QString ip = "127.0.0.1";
	int port = 1234;
	socket->connectToHost(ip, port);
	
	ui.dreamscord->setVisible(true);
	ui.MDPlineEdit_2->setVisible(false);
	ui.confirmationMDPlabel_4->setVisible(false);
	ui.confirmationlineEdit_3->setVisible(false);
	ui.connexion->setVisible(true);
	ui.connexionButton->setVisible(true);
	ui.envoyerButton->setVisible(false);
    ui.InscriptionButton->setVisible(true);
	ui.messageEnvoyer->setVisible(false);
	ui.motDePasselabel_3->setVisible(false);
	ui.motdepasse->setVisible(true);
	ui.pseudo->setVisible(true);
	ui.pseudolabel_2->setVisible(false);
	ui.speudoLineEdit->setVisible(true);
	ui.speudoinscritionlineEdit->setVisible(false);
	ui.zone_de_test->setVisible(false);
	 ui.messageEnvoyer->setVisible(false);
	 ui.mot_passeLineEdit->setVisible(true);
	 ui.incription->setVisible(false);
}



void client::onConnectButtonClicked()
{
   QString pseudo = ui.speudoLineEdit->text();
	 QString MDP = ui.mot_passeLineEdit->text();



}


void client::inscription()
{
	ui.dreamscord->setVisible(true);

	ui.MDPlineEdit_2->setVisible(true);

	ui.confirmationMDPlabel_4->setVisible(true);
	ui.confirmationlineEdit_3->setVisible(true);
	ui.connexion->setVisible(false);
	ui.connexionButton->setVisible(true);
	ui.envoyerButton->setVisible(false);
	ui.incription->setVisible(true);
	ui.InscriptionButton->setVisible(true);
	ui.messageEnvoyer->setVisible(false);
	ui.motDePasselabel_3->setVisible(true);
	ui.motdepasse->setVisible(false);
	ui.pseudo->setVisible(false);
	ui.pseudolabel_2->setVisible(true);
	ui.speudoLineEdit->setVisible(false);
	ui.speudoinscritionlineEdit->setVisible(true);
	ui.zone_de_test->setVisible(false);
	ui.messageEnvoyer->setVisible(false);
	ui.mot_passeLineEdit->setVisible(false);
	

}
void client::connexion()
{
	ui.dreamscord->setVisible(true);
	ui.MDPlineEdit_2->setVisible(false);
	ui.confirmationMDPlabel_4->setVisible(false);
	ui.confirmationlineEdit_3->setVisible(false);
	ui.connexion->setVisible(true);
	ui.connexionButton->setVisible(true);
	ui.envoyerButton->setVisible(false);
	ui.InscriptionButton->setVisible(true);
	ui.messageEnvoyer->setVisible(false);
	ui.motDePasselabel_3->setVisible(false);
	ui.motdepasse->setVisible(true);
	ui.pseudo->setVisible(true);
	ui.pseudolabel_2->setVisible(false);
	ui.speudoLineEdit->setVisible(true);
	ui.speudoinscritionlineEdit->setVisible(false);
	ui.zone_de_test->setVisible(false);
	ui.messageEnvoyer->setVisible(false);
	ui.mot_passeLineEdit->setVisible(true);
	ui.incription->setVisible(false);
}