/*
 *
 * Copyright 2013 Canonical Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *
*/
#include "qmlplugin.h"
#include "cordova.h"
#include <QtCore>
#include <qqml.h>

void CordovaUbuntuPlugin::registerTypes(const char *) {
    qmlRegisterType<CordovaWrapper>("CordovaUbuntu", CORDOVA_UBUNTU_MAJOR_VERSION, CORDOVA_UBUNTU_MINOR_VERSION, "Cordova");
}
