#/*****************************************************************************
# * mx-bootrepair.pro
# *****************************************************************************
# * Copyright (C) 2014 MX Authors
# *
# * Authors: Adrian
# *          MX Linux <http://mxlinux.org>
# *
# * This program is free software: you can redistribute it and/or modify
# * it under the terms of the GNU General Public License as published by
# * the Free Software Foundation, either version 3 of the License, or
# * (at your option) any later version.
# *
# * MX Boot Repair is distributed in the hope that it will be useful,
# * but WITHOUT ANY WARRANTY; without even the implied warranty of
# * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# * GNU General Public License for more details.
# *
# * You should have received a copy of the GNU General Public License
# * along with MX Boot Repair.  If not, see <http://www.gnu.org/licenses/>.
# **********************************************************************/

#-------------------------------------------------
#
# Project created by QtCreator 2014-04-02T18:30:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = bootrepair
TEMPLATE = app


SOURCES += main.cpp\
        mxbootrepair.cpp

HEADERS  += mxbootrepair.h

FORMS    += mxbootrepair.ui

TRANSLATIONS += translations/bootrepair_ca.ts \
                translations/bootrepair_cs.ts \
                translations/bootrepair_de.ts \
                translations/bootrepair_el.ts \
                translations/bootrepair_es.ts \
                translations/bootrepair_fr.ts \
                translations/bootrepair_it.ts \
                translations/bootrepair_ja.ts \
                translations/bootrepair_lt.ts \
                translations/bootrepair_nl.ts \
                translations/bootrepair_pl.ts \
                translations/bootrepair_pt.ts \
                translations/bootrepair_ro.ts \
                translations/bootrepair_ru.ts \
                translations/bootrepair_sk.ts \
                translations/bootrepair_sv.ts \
                translations/bootrepair_tr.ts

RESOURCES += \
    images.qrc

