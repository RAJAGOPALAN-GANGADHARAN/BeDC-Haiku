/*
 * Copyright 2018, Your Name <your@email.address>
 * All rights reserved. Distributed under the terms of the MIT license.
 */


#include "MainWindow.h"
#include <Window.h>
#include <Message.h>
#include <Rect.h>
#include <View.h>
#include <GridLayout.h>
#include <StringView.h>

#include <cstdio>

int x=0;

MainWindow::MainWindow()
	:BWindow(BRect(100,100,500,400), "BeDC", B_TITLED_WINDOW, B_ASYNCHRONOUS_CONTROLS)
{
	BRect frame(Bounds());
	m_view = new BView(frame,"main_view",B_FOLLOW_ALL_SIDES,
		B_WILL_DRAW | B_DRAW_ON_CHILDREN | B_SUPPORTS_LAYOUT);
	
	BGridLayout* m_grid = new BGridLayout();
	
	BStringView* v = new BStringView("t_view","Test1");
	m_grid->AddView(v,1,1);
	m_view->AddChild(m_grid);
	this->AddChild(m_view);
}

void MainWindow::ProcessMessage(BMessage* msg)
{
	BString* msg_name = new BString();
	msg->FindString("bedc_name", msg_name);
	fprintf(stderr,"%s\n",msg_name->String());
	
	
}

MainWindow::~MainWindow()
{
}

