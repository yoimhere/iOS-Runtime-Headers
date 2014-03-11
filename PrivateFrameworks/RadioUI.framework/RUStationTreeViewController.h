/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class <RUStationTreeViewControllerDelegate>, NSMutableArray, RUMetricsController, RUParallelScrollView, RUPreviewSession, RUProxyTableView, RUStationTreeDataSource, RadioStationTreeNode, SKUICircleProgressIndicator, SSMetricsPageEvent, UILabel, UIScrollView, UITableView;

@interface RUStationTreeViewController : UIViewController <RUAudioPreviewViewDelegate, RUPreviewSessionObserver, UITableViewDataSource, UITableViewDelegate> {
    SKUICircleProgressIndicator *_activityIndicator;
    RadioStationTreeNode *_addingTreeNode;
    RUParallelScrollView *_containerScrollView;
    RUStationTreeDataSource *_dataSource;
    <RUStationTreeViewControllerDelegate> *_delegate;
    BOOL _hasLoadedParentTreeNode;
    BOOL _isLoadingParentTreeNode;
    SSMetricsPageEvent *_lastPageEvent;
    UILabel *_loadingLabel;
    NSMutableArray *_loadingTreeNodes;
    RUMetricsController *_metricsController;
    int _navigationOperation;
    RadioStationTreeNode *_parentTreeNode;
    RUPreviewSession *_previewSession;
    RadioStationTreeNode *_previewingTreeNode;
    NSMutableArray *_queuedMetricsOperations;
    RUProxyTableView *_tableView;
    BOOL _wasLastNavigationOperationAnimated;
}

@property <RUStationTreeViewControllerDelegate> * delegate;
@property(readonly) UIScrollView * scrollView;
@property(readonly) UITableView * tableView;

+ (id)_imageCache;

- (void).cxx_destruct;
- (void)_addButtonAction:(id)arg1;
- (void)_addMetricsControllerOperationBlock:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applyPreviewingAttributesToCell:(id)arg1 forTreeNode:(id)arg2 animated:(BOOL)arg3;
- (id)_childTreeNodeAtIndexPath:(id)arg1;
- (id)_currentPreviewTrackDescripton;
- (void)_endPreviewPlaybackWithOptions:(int)arg1 withFinalItem:(id)arg2 didFinalItemPlayToCompletion:(BOOL)arg3;
- (id)_indexPathForChildTreeNode:(id)arg1;
- (id)_initWithDataSource:(id)arg1;
- (void)_loadAdditionalChildrenForSectionTreeNode:(id)arg1;
- (id)_mediaEventForPreviewingItem:(id)arg1;
- (void)_updateWithParentNode:(id)arg1 metricsPageEvent:(id)arg2 metricsConfiguration:(id)arg3 canReloadTableView:(BOOL)arg4;
- (void)audioPreviewViewDidCancel:(id)arg1 forReason:(int)arg2;
- (id)contentScrollView;
- (void)dealloc;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (id)initForFeaturedStations;
- (id)initWithParentNodeID:(long long)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)previewSession:(id)arg1 didChangeFromItem:(id)arg2 toItem:(id)arg3;
- (void)previewSession:(id)arg1 didStopWithOptions:(int)arg2 withFinalItem:(id)arg3 didFinalItemPlayToCompletion:(BOOL)arg4;
- (void)removeAddingIndicator;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (id)tableView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end