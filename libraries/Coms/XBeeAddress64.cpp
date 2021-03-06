#include "XBeeAddress64.h"

XBeeAddress64::XBeeAddress64() : XBeeAddress() {

}

XBeeAddress64::XBeeAddress64(uint32_t msb, uint32_t lsb) : XBeeAddress() {
	_msb = msb;
	_lsb = lsb;
}

uint32_t XBeeAddress64::getMsb() {
	return _msb;
}

void XBeeAddress64::setMsb(uint32_t msb) {
	_msb = msb;
}

uint32_t XBeeAddress64::getLsb() {
	return _lsb;
}

void XBeeAddress64::setLsb(uint32_t lsb) {
	_lsb = lsb;
}