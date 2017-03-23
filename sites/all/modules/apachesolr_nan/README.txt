Apache SOLR Not-a-Node (NAN)
----------------------------

Apache Solr Not-a-Node is designed to solve the problem of needing to
have non-node pages such as views and panels, show in search results
that are returned by Apache Solr.

The idea is that we create a fake node entry identified by a negative
node id number and feed that to solr. We choose negative numbers to
avoid collisions with real nodes in the index.

There is an administration page in which users add the paths that they
would like indexed as well as custom description information that will
help users search for the page. The extra description is prepended
onto the rendered page.

The paths are rendered as though by an anonymous user. This is the
same way that Apache Solr module handles this.

Pages other than views and panels should also work providing they are
valid paths that can be seen by an anonymous user. These include
custom page callbacks or pages provided by other modules.
