// ComBoat.cpp : Implementation of CComBoat
#include "stdafx.h"
#include "AtlCarServer.h"
#include "ComBoat.h"

/////////////////////////////////////////////////////////////////////////////
// CComBoat


STDMETHODIMP CComBoat::Swimming()
{
	MessageBox(NULL, "ComBoat::Swimming()", "Com Boat", MB_OK);
	return S_OK;
}


STDMETHODIMP CComBoat::TurboSwimming()
{
	// TODO: Add your implementation code here
	MessageBox(NULL, "ComBoat::TurboSwimming()", "Com Boat", MB_OK);

	return S_OK;
}
