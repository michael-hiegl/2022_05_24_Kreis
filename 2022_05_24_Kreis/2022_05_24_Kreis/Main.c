//**************************************************************************
//**************************************************************************
//**
//**	Projekt: 2022_05_24_Kreis	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 5/24/2022 6:20:32 PM
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()
#define PI 3.141592


//Functions
//**************************************************************************

int main(void)
{
	//Variables
	int i_radius = 0;



	//Code
	printf("%i\n", PI);
	printf("Bitte Radius eingeben\n");

	scanf("%i", &i_radius);

	printf("Durchmesser ist %i\n", i_radius * 2);
	printf("Umfang ist %i\n", i_radius * PI);
	printf("Flaeche ist %i\n", i_radius * i_radius * PI);




	getchar();
	fflush(stdin);
	getchar();
	return 0;
}