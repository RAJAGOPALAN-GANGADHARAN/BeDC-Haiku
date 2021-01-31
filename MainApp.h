/*
 * Copyright 2018, Your Name <your@email.address>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#pragma once

#include <Application.h>

class BMessage;
class MainWindow;

class MainApp : public BApplication
{
	public:
	MainApp();
	void MessageReceived(BMessage*) override;
	
	private:
	MainWindow* m_window;
};

