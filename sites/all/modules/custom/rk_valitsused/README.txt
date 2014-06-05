Varasemad valitsused module

Trying to keep this a self-contained module so that it can
do everything out of the box. It is based on the original 
varasemad valitsused pages that existed on the valitsus.ee
site upto mid 2014. I am using the same db table structure
and have extended it somewhat to be more robust.

Views are used to display the info and the admin interface
to add / edit ministers and governments is custom built.

Starting from zero I probably would have created entities,
and views and packed it all in a feature. However, I went
the custom module route to just use the original db
structure. In retrospect it may have been easier to start
absolutely from scratch.

So far the most bizarre addition has been adding a custom
schema uri (rkvalitsused://) using hook_stream_wrappers.
It works, but seems like overkill to just get the fapi
managed_file field type to save outside of the public://
schema uri. Did not find step-by-steps or anything to 
support or refute the way I have done it.

