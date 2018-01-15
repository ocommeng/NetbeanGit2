/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IHM.h
 * Author: ocommeng
 *
 * Created on 15 janvier 2018, 15:18
 */

#ifndef _IHM_H
#define _IHM_H

#include "ui_IHM.h"

class IHM : public QWidget {
    Q_OBJECT
public:
    IHM();
    virtual ~IHM();
private:
    Ui::IHM widget;
};

#endif /* _IHM_H */
