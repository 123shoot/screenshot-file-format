/*
    Screenshot File Format:
    A Mac OS X command line utility that allows users to choose between PNG, PDF, PSD
    JPG, TIF, or GIF as file formats for screenshots.

    Copyright (C) 2016  Roy Vanegas

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or any
    later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/gpl-3.0.html>.
 */
#ifndef __CONSTANTS_H__
#define __CONSTANTS_H__

#define NORMAL                   "\033[0m"
#define RED                      "\033[31m"
#define GREEN                    "\033[32m"
#define BLUE                     "\033[34m"

#define RESPONSE_LENGTH          32
#define MAX_INPUT_LENGTH         12
#define MAX_FILE_FORMAT_LENGTH   30
#define MAX_INTRO_CONTENT_LENGTH 114

#endif
