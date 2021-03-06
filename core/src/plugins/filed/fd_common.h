/*
   BAREOS® - Backup Archiving REcovery Open Sourced

   Copyright (C) 2010-2011 Bacula Systems(R) SA
   Copyright (C) 2016-2016 Bareos GmbH & Co. KG

   This program is Free Software; you can modify it under the terms of
   version three of the GNU Affero General Public License as published by the
   Free Software Foundation, which is listed in the file LICENSE.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
   Affero General Public License for more details.

   You should have received a copy of the GNU Affero General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
   02110-1301, USA.
*/
/*
 * @file
 * You can include this file to your plugin to have
 * access to some common tools and utilities provided by Bareos
 */

#ifndef BAREOS_PLUGINS_FILED_FD_COMMON_H_
#define BAREOS_PLUGINS_FILED_FD_COMMON_H_


#define JT_BACKUP 'B'  /* Backup Job */
#define JT_RESTORE 'R' /* Restore Job */

#define L_FULL 'F'         /* Full backup */
#define L_INCREMENTAL 'I'  /* since last backup */
#define L_DIFFERENTIAL 'D' /* since last full backup */

#define Dmsg(context, level, ...) \
  bfuncs->DebugMessage(context, __FILE__, __LINE__, level, __VA_ARGS__)
#define Jmsg(context, type, ...) \
  bfuncs->JobMessage(context, __FILE__, __LINE__, type, 0, __VA_ARGS__)

#endif
