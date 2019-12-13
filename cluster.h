/*! \brief Structure storing a single cluster to be found by
 *         clustering algorithms
 *         such as dbscan.
 */
typedef struct {
  int * members;  /*!< integer containing the number of each sample that is
		   *   part of this cluster */
  int n_members;  /*!< number of samples represented in this cluster */
  int id;         /*!< unique cluster id in a set of clusters */
} cluster;

/*! \brief Structure storing multiple clusters of a dataset to be found by
 *         clustering algorithms such as dbscan.
 */
typedef struct {
  int n_clusters; /*!< number of clusters to be contained in this set */
  cluster* clusters; /*!< the clusters contained within this set */
} split_set;

typedef struct {
  int* connections;
  int n_connections;
} cluster_connections;

void create_cluster_files(char* prefix, split_set s, dataset ds);
void create_cluster_files_with_values(char* prefix, split_set s, dataset ds);
void create_single_cluster_file(char* filename, cluster cl, dataset ds);
void create_single_cluster_file_with_values(char* filename, cluster cl,
					    dataset ds);
cluster intersection_of_clusters(cluster a, cluster b);
