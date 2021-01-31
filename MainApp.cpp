/*
 * Copyright 2018, Rajagopalan Gangadharan <g.raju2000@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */


#include "MainApp.h"
#include "MainWindow.h"

#include <Application.h>
#include <Message.h>
#include <String.h>
#include <cstdio>

#define BEDC_MESSAGE 'bedc'

MainApp::MainApp()
	:BApplication("application/x-vnd.ml-BeDCApp")
{
	m_window = new MainWindow();
	m_window->Show();
}

void MainApp::MessageReceived(BMessage* msg)
{
	switch(msg->what)
	{
		case BEDC_MESSAGE:
		m_window->ProcessMessage(msg);
		break;
		default:
		BApplication::MessageReceived(msg);
	}
}


int main(char** argv,int argc)
{
	MainApp* app = new MainApp();
	
	return app->Run();
}
