//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FLPinScope, FLSequenceAdapter, FLVariableSink, FujiActivityIndicator, IRUBouncyButton, IRUGenericBubbleView, IRUGroupListFriendHeaderCell, IRUGroupListJumpCell, IRUGroupListNoResultsCell, IRUGroupListQuery, IRUGroupListSmartTopView, IRUGroupListTableView, IRUPreviewCommitController, IRUTableViewUpdateManager, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface IRUGroupListViewController : UIViewController
{
    FLPinScope *_scope;
    _Bool _viewDidAppear;
    _Bool _hasLaidOut;
    IRUGroupListNoResultsCell *_noResultsCell;
    IRUGroupListJumpCell *_inviteJumpCell;
    IRUGroupListJumpCell *_buddiesJumpCell;
    _Bool _groupAnimationsEnabled;
    _Bool _groupInvitesContainsResults;
    FLVariableSink *_groupAvailabilitySink;
    _Bool _willShowComposeHint;
    _Bool _inSearchMode;
    _Bool _currentlyFetchingGroups;
    _Bool _fetchingGroupsQueued;
    _Bool _showTrailingSections;
    _Bool _jumpToTopAtNextGroupQueryRefresh;
    _Bool _searchFieldEnabled;
    IRUGroupListSmartTopView *_smartTopView;
    IRUGroupListTableView *_tableView;
    IRUGenericBubbleView *_composeOnboardingHintView;
    UILabel *_composeOnboardingHintLabel;
    IRUBouncyButton *_composeButton;
    FLSequenceAdapter *_dataSource;
    IRUTableViewUpdateManager *_tableManager;
    IRUGroupListQuery *_currentGroupListQuery;
    NSString *_currentSearchString;
    long long _maxLastItemId;
    IRUGroupListFriendHeaderCell *_friendHeaderCell;
    FujiActivityIndicator *_spinner;
    IRUPreviewCommitController *_previewCommitController;
}

@property(readonly, nonatomic) IRUPreviewCommitController *previewCommitController; // @synthesize previewCommitController=_previewCommitController;
@property(nonatomic) __weak FujiActivityIndicator *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) _Bool searchFieldEnabled; // @synthesize searchFieldEnabled=_searchFieldEnabled;
@property(readonly, nonatomic) IRUGroupListFriendHeaderCell *friendHeaderCell; // @synthesize friendHeaderCell=_friendHeaderCell;
@property(nonatomic) long long maxLastItemId; // @synthesize maxLastItemId=_maxLastItemId;
@property(nonatomic) _Bool jumpToTopAtNextGroupQueryRefresh; // @synthesize jumpToTopAtNextGroupQueryRefresh=_jumpToTopAtNextGroupQueryRefresh;
@property(nonatomic) _Bool showTrailingSections; // @synthesize showTrailingSections=_showTrailingSections;
@property(nonatomic) _Bool fetchingGroupsQueued; // @synthesize fetchingGroupsQueued=_fetchingGroupsQueued;
@property(nonatomic) _Bool currentlyFetchingGroups; // @synthesize currentlyFetchingGroups=_currentlyFetchingGroups;
@property(nonatomic) _Bool inSearchMode; // @synthesize inSearchMode=_inSearchMode;
@property(nonatomic) _Bool willShowComposeHint; // @synthesize willShowComposeHint=_willShowComposeHint;
@property(retain, nonatomic) NSString *currentSearchString; // @synthesize currentSearchString=_currentSearchString;
@property(retain, nonatomic) IRUGroupListQuery *currentGroupListQuery; // @synthesize currentGroupListQuery=_currentGroupListQuery;
@property(retain, nonatomic) IRUTableViewUpdateManager *tableManager; // @synthesize tableManager=_tableManager;
@property(retain, nonatomic) FLSequenceAdapter *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak IRUBouncyButton *composeButton; // @synthesize composeButton=_composeButton;
@property(nonatomic) __weak UILabel *composeOnboardingHintLabel; // @synthesize composeOnboardingHintLabel=_composeOnboardingHintLabel;
@property(nonatomic) __weak IRUGenericBubbleView *composeOnboardingHintView; // @synthesize composeOnboardingHintView=_composeOnboardingHintView;
@property(nonatomic) __weak IRUGroupListTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak IRUGroupListSmartTopView *smartTopView; // @synthesize smartTopView=_smartTopView;

- (id)navigationTransitionFactory;
- (void)presentPermissionsSliderDialogIfNeeded;
- (void)commitViewController:(id)arg1;
- (id)previewViewControllerForTarget:(id)arg1 targetModel:(id)arg2 location:(struct CGPoint)arg3;
- (id)presentContactsViewControllerWithMode:(unsigned long long)arg1 prefilledSearchText:(id)arg2;
- (id)presentContactsViewControllerWithMode:(unsigned long long)arg1;
- (void)updateTableViewContentInsetsAnimated:(_Bool)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)enterConversationViewForGroup:(id)arg1 disableAutoPop:(_Bool)arg2 animated:(_Bool)arg3;
- (void)enterConversationWithContact:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (Class)classTypeForRowInGroupSection:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (_Bool)shouldAdjustContentOffsetsWithTableView:(id)arg1;
- (void)sequenceAdapter:(id)arg1 performRowInserts:(id)arg2 deletes:(id)arg3 moves:(id)arg4;
- (void)invitationsContentViewSelected:(id)arg1;
- (void)groupListSmartTopView:(id)arg1 searchTextChanged:(id)arg2;
- (void)groupListSmartTopView:(id)arg1 showSettings:(id)arg2;
- (void)groupListSmartTopView:(id)arg1 effectiveHeightChangedFrom:(double)arg2 animated:(_Bool)arg3;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)queryAvailable:(id)arg1;
- (void)composePressed:(id)arg1;
- (void)hideComposeHint;
- (void)contactsViewDidCompleteWithSuccess:(_Bool)arg1 withGroup:(id)arg2;
- (_Bool)shouldDisplayNotification:(id)arg1;
- (void)updateMaxLastItemTimeWithIsAppearing:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isVisible;
- (void)rebuildGroupListQuery;
- (void)updateQueryAndFetch;
@property(readonly, nonatomic) int virtualizationWindowSize;
- (long long)preferredStatusBarStyle;
- (void)openGroupWithKey:(id)arg1 animated:(_Bool)arg2;
- (_Bool)handleDeepLinkAction:(id)arg1;
- (void)handleDeepLinkActionIfNeeded;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)configureTableViewWithInitialGroupListQuery:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) IRUGroupListJumpCell *buddiesJumpCell;
@property(readonly, nonatomic) IRUGroupListJumpCell *inviteJumpCell;
@property(readonly, nonatomic) IRUGroupListNoResultsCell *noResultsCell;
- (void)dealloc;

@end

