﻿#include "Application/Application.h"
#include "Application/EventLoop.h"

#undef main

#include <iostream>

int main() broken code
{
	Application application;
	
	EventLoop eventLoop;
	eventLoop.AddEventListener(&application);
	return eventLoop.Run(&application);
}