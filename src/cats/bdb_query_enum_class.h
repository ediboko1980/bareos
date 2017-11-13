/* autogenerated file by ./create_queryfiles.sh */

class B_DB_QUERY_ENUM_CLASS {
public:
   typedef enum {
      SQL_QUERY_get_restore_objects = 0,
      SQL_QUERY_cleanup_created_job = 1,
      SQL_QUERY_cleanup_running_job = 2,
      SQL_QUERY_fill_jobhisto = 3,
      SQL_QUERY_list_pool = 4,
      SQL_QUERY_list_jobs = 5,
      SQL_QUERY_list_jobs_long = 6,
      SQL_QUERY_list_jobs_count = 7,
      SQL_QUERY_list_jobs_last = 8,
      SQL_QUERY_list_jobs_long_last = 9,
      SQL_QUERY_sel_JobMedia = 10,
      SQL_QUERY_drop_deltabs = 11,
      SQL_QUERY_create_deltabs = 12,
      SQL_QUERY_create_delindex = 13,
      SQL_QUERY_uar_count_files = 14,
      SQL_QUERY_uar_list_jobs = 15,
      SQL_QUERY_uar_print_jobs = 16,
      SQL_QUERY_uar_del_temp = 17,
      SQL_QUERY_uar_del_temp1 = 18,
      SQL_QUERY_uar_last_full = 19,
      SQL_QUERY_uar_last_full_no_pool = 20,
      SQL_QUERY_uar_full = 21,
      SQL_QUERY_uar_dif = 22,
      SQL_QUERY_uar_inc = 23,
      SQL_QUERY_uar_list_jobs_by_idlist = 24,
      SQL_QUERY_uar_sel_jobid_temp = 25,
      SQL_QUERY_uar_sel_all_temp1 = 26,
      SQL_QUERY_uar_sel_all_temp = 27,
      SQL_QUERY_uar_sel_fileset = 28,
      SQL_QUERY_uar_sel_filesetid = 29,
      SQL_QUERY_uar_jobid_fileindex = 30,
      SQL_QUERY_uar_jobids_fileindex = 31,
      SQL_QUERY_uar_jobid_fileindex_from_table = 32,
      SQL_QUERY_select_recent_version_with_basejob = 33,
      SQL_QUERY_select_recent_version_with_basejob_and_delta = 34,
      SQL_QUERY_select_recent_version = 35,
      SQL_QUERY_create_temp_accurate_jobids = 36,
      SQL_QUERY_create_temp_basefile = 37,
      SQL_QUERY_create_temp_new_basefile = 38,
      SQL_QUERY_uap_upgrade_copies_oldest_job = 39,
      SQL_QUERY_uar_file = 40,
      SQL_QUERY_uar_create_temp = 41,
      SQL_QUERY_uar_create_temp1 = 42,
      SQL_QUERY_uar_jobid_fileindex_from_dir = 43,
      SQL_QUERY_sql_media_order_most_recently_written = 44,
      SQL_QUERY_sql_get_max_connections = 45,
      SQL_QUERY_bvfs_select = 46,
      SQL_QUERY_bvfs_list_files = 47,
      SQL_QUERY_batch_lock_path_query = 48,
      SQL_QUERY_batch_lock_filename_query = 49,
      SQL_QUERY_batch_unlock_tables_query = 50,
      SQL_QUERY_batch_fill_path_query = 51,
      SQL_QUERY_batch_fill_filename_query = 52,
      SQL_QUERY_match_query = 53,
      SQL_QUERY_match_query2 = 54,
      SQL_QUERY_insert_counter_values = 55,
      SQL_QUERY_select_counter_values = 56,
      SQL_QUERY_update_counter_values = 57,
      SQL_QUERY_get_quota_jobbytes = 58,
      SQL_QUERY_get_quota_jobbytes_nofailed = 59,
      SQL_QUERY_uar_sel_jobid_copies = 60,
      SQL_QUERY_get_jobstatus_details = 61,
      SQL_QUERY_bvfs_versions_6 = 62,
      SQL_QUERY_bvfs_lsdirs_7 = 63,
      SQL_QUERY_bvfs_clear_cache_0 = 64,
      SQL_QUERY_bvfs_update_path_visibility_3 = 65,
      SQL_QUERY_list_volumes_count_0 = 66,
      SQL_QUERY_list_volumes_by_name_count_1 = 67,
      SQL_QUERY_list_volumes_by_poolid_count_1 = 68,
      SQL_QUERY_list_joblog_2 = 69,
      SQL_QUERY_list_joblog_count_1 = 70,
      SQL_QUERY_NUMBER = 71
   } SQL_QUERY_ENUM;
};