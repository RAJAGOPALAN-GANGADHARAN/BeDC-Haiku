/*
 * Copyright 2018, Your Name <your@email.address>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#pragma once

#include <Window.h>

class BMessage;
class BView;

class MainWindow : public BWindow
{
	public:
	MainWindow();
	~MainWindow();
	void ProcessMessage(BMessage*);
	private:
	BView* m_view;
};
