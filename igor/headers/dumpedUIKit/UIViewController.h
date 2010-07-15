/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIViewController.h"
#import "UIKit-Structs.h"
#import "UIResponder.h"

@class NSString, UISearchDisplayController, UINavigationItem, UITabBarItem, NSBundle, UINavigationController, NSHashTable, UITabBarController, UITransitionView, UIView, UIBarButtonItem, NSArray;

@interface UIViewController : UIResponder <NSCoding> {
@private
	UIView* _view;
	UITabBarItem* _tabBarItem;
	UINavigationItem* _navigationItem;
	NSArray* _toolbarItems;
	NSString* _title;
	NSString* _nibName;
	NSBundle* _nibBundle;
	UIViewController* _parentViewController;
	NSHashTable* _childViewControllers;
	UIViewController* _childModalViewController;
	UIView* _modalTransitionView;
	UIResponder* _modalPreservedFirstResponder;
	UIView* _dimmingView;
	UIView* _presentationSuperview;
	id _currentAction;
	UIView* _savedHeaderSuperview;
	UIView* _savedFooterSuperview;
	UIBarButtonItem* _editButtonItem;
	UISearchDisplayController* _searchDisplayController;
	int _modalTransitionStyle;
	int _lastKnownInterfaceOrientation;
	struct {
		unsigned appearState : 2;
		unsigned isEditing : 1;
		unsigned isPerformingModalTransition : 1;
		unsigned hidesBottomBarWhenPushed : 1;
		unsigned autoresizesArchivedViewToFullSize : 1;
		unsigned viewLoadedFromControllerNib : 1;
		unsigned isRootViewController : 1;
		unsigned isSuspended : 1;
		unsigned wasApplicationFrameAtSuspend : 1;
		unsigned wantsFullScreenLayout : 1;
		unsigned shouldUseFullScreenLayout : 1;
		unsigned allowsAutorotation : 1;
		unsigned searchControllerRetained : 1;
	} _viewControllerFlags;
}
@property(copy, nonatomic) NSString* nibName;
@property(readonly, assign, nonatomic) UIView* savedHeaderSuperview;
@property(retain, nonatomic) NSBundle* nibBundle;
@property(copy, nonatomic) NSString* title;
@property(retain, nonatomic) NSHashTable* childViewControllers;
@property(retain, nonatomic) UIViewController* childModalViewController;
@property(assign, nonatomic) int modalTransitionStyle;
@property(retain, nonatomic) UISearchDisplayController* searchDisplayController;
@property(retain, nonatomic) UITransitionView* modalTransitionView;
@property(assign, nonatomic) int interfaceOrientation;
@property(assign, nonatomic) UIViewController* parentViewController;
@property(assign, nonatomic) BOOL wantsFullScreenLayout;
@property(readonly, assign, nonatomic) UIViewController* modalViewController;
@property(retain, nonatomic) UIView* view;
+(BOOL)doesOverrideViewControllerMethod:(SEL)method;
+(id)existingNibNameMatchingClassName:(id)name bundle:(id)bundle;
+(int)_keyboardDirectionForTransition:(int)transition isOrderingIn:(BOOL)anIn;
+(id)viewControllerForView:(id)view;
+(void)removeViewControllerForView:(id)view;
+(void)setViewController:(id)controller forView:(id)view;
+(void)_setApplicationSuspendPurgeDelay:(double)delay;
+(BOOL)_isViewSizeFullScreen:(id)screen inWindow:(id)window;
+(void)_forceLegacyModalViewControllers:(BOOL)controllers;
+(BOOL)_shouldUseLegacyModalViewControllers;
+(void)setCustomTransitionDuration:(double)duration;
+(double)customTransitionDuration;
+(double)durationForTransition:(int)transition;
+(BOOL)_doesOverrideLegacyShouldAutorotateMethod;
-(void)_doCommonSetup;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(id)init;
-(id)initWithCoder:(id)coder;
-(void)awakeFromNib;
-(void)_populateArchivedChildViewControllers:(id)controllers;
-(BOOL)_shouldPersistViewWhenCoding;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)nextResponder;
-(void)_loadViewFromNibNamed:(id)nibNamed bundle:(id)bundle;
-(CGRect)_defaultInitialViewFrame;
-(float)_statusBarHeightForCurrentInterfaceOrientation;
-(void)loadView;
-(void)viewDidLoad;
-(void)forceUnloadView;
-(void)unloadView;
-(void)unloadViewIfReloadable;
-(void)unloadViewForced:(BOOL)forced;
-(void)viewDidUnload;
-(BOOL)isViewLoaded;
-(id)existingView;
-(id)_existingView;
-(id)contentScrollView;
-(void)_setExistingNavigationItem:(id)item;
-(id)_existingNavigationItem;
-(void)_setExistingTabBarItem:(id)item;
-(id)_existingTabBarItem;
-(void)window:(id)window willAnimateFromContentFrame:(CGRect)contentFrame toContentFrame:(CGRect)contentFrame3;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(BOOL)autoresizesArchivedViewToFullSize;
-(void)setAutoresizesArchivedViewToFullSize:(BOOL)fullSize;
-(void)autoresizeArchivedView;
-(void)updateTitleForViewController:(id)viewController;
-(void)addChildViewController:(id)controller;
-(void)removeChildViewController:(id)controller;
-(id)_nonModalParentViewController;
-(id)_ancestorViewControllerOfClass:(Class)aClass allowModalParent:(BOOL)parent;
-(BOOL)_isAppearingOrAppeared;
-(int)_appearState;
-(BOOL)_hasAppeared;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(BOOL)_tryBecomeRootViewControllerInWindow:(id)window;
-(void)_resignRootViewController;
-(void)viewWillMoveToWindow:(id)view;
-(void)viewDidMoveToWindow:(id)view shouldAppearOrDisappear:(BOOL)disappear;
-(void)_didReceiveMemoryWarning:(id)warning;
-(void)didReceiveMemoryWarning;
-(BOOL)_canReloadView;
-(void)purgeMemoryForReason:(int)reason;
-(BOOL)_isViewInWindowWithoutParentViewController;
-(id)_visibleView;
-(void)_purgeForApplicationSuspend;
-(void)applicationWillSuspend;
-(void)applicationDidResume;
-(BOOL)_shouldUseFullScreenLayout;
-(BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)layout;
-(BOOL)_shouldUseFullScreenLayoutInWindow:(id)window parentViewController:(id)controller;
-(BOOL)_reallyWantsFullScreenLayout;
-(BOOL)isPerformingModalTransition;
-(id)presentedViewController;
-(id)currentAction;
-(void)_overlayPresentAnimationDidStop:(id)_overlayPresentAnimation finished:(id)finished context:(id)context;
-(void)presentModalViewController:(id)controller fromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;
-(void)dismissModalOverlayViewController;
-(void)dimmingViewWasTapped:(id)tapped;
-(void)_dismissModalOverlayAnimationDidStop:(id)_dismissModalOverlayAnimation finished:(id)finished context:(id)context;
-(void)_legacyPresentModalViewController:(id)controller withTransition:(int)transition;
-(int)_preferredInterfaceOrientationGivenCurrentOrientation:(int)orientation;
-(void)presentModalViewController:(id)controller withTransition:(int)transition;
-(int)_transitionForModalTransitionStyle:(int)modalTransitionStyle appearing:(BOOL)appearing;
-(void)presentModalViewController:(id)controller animated:(BOOL)animated;
-(BOOL)_tryRecursivelyPresentModalViewController:(id)controller withTransition:(int)transition;
-(void)_legacyDismissModalViewController:(id)controller withTransition:(int)transition;
-(void)dismissModalViewControllerWithTransition:(int)transition;
-(void)dismissModalViewControllerAnimated:(BOOL)animated;
-(void)transitionViewDidComplete:(id)transitionView fromView:(id)view toView:(id)view3;
-(void)_didFinishPresentModalTransition;
-(void)_legacyModalPresentTransitionDidComplete;
-(void)_didFinishDismissModalTransition;
-(void)_legacyModalDismissTransitionDidComplete;
-(double)durationForTransition:(int)transition;
-(id)viewControllerForRotation;
-(void)_beginDisablingInterfaceAutorotation;
-(void)_endDisablingInterfaceAutorotation;
-(BOOL)_isInterfaceAutorotationDisabled;
-(void)_updateInterfaceOrientationAnimated:(BOOL)animated;
-(BOOL)window:(id)window shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)_allowsAutorotation;
-(void)_setAllowsAutorotation:(BOOL)autorotation;
-(BOOL)_isSupportedInterfaceOrientation:(int)orientation;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)rotatingHeaderViewForWindow:(id)window;
-(id)rotatingHeaderView;
-(id)rotatingContentViewForWindow:(id)window;
-(id)rotatingFooterViewForWindow:(id)window;
-(id)rotatingFooterView;
-(int)_lastKnownInterfaceOrientation;
-(void)_setInterfaceOrientationOnModalRecursively:(int)recursively;
-(CGPoint)_centerForOrientation:(int)orientation;
-(CGRect)_boundsForOrientation:(int)orientation;
-(void)window:(id)window willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)animation;
-(BOOL)_shouldUseOnePartRotation;
-(void)getRotationContentSettings:(XXStruct_TF$i3B*)settings forWindow:(id)window;
-(void)_getRotationContentSettings:(XXStruct_TF$i3B*)settings;
-(void)window:(id)window willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)window:(id)window willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)window:(id)window didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;
-(void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;
-(void)window:(id)window willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)window:(id)window didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(id)defaultPNGName;
-(void)_setSearchDisplayController:(id)controller retain:(BOOL)retain;
-(void)_setSearchDisplayControllerUnretained:(id)unretained;
@end

@interface UIViewController (UIViewControllerClassDumpWarning)
-(void)attentionClassDumpUser:(id)user yesItsUsAgain:(id)again althoughSwizzlingAndOverridingPrivateMethodsIsFun:(id)fun itWasntMuchFunWhenYourAppStoppedWorking:(id)working pleaseRefrainFromDoingSoInTheFutureOkayThanksBye:(id)theFutureOkayThanksBye;
@end

@interface UIViewController (UINavigationControllerContextualToolbar)
-(id)toolbarItems;
-(void)setToolbarItems:(id)items;
-(void)setToolbarItems:(id)items animated:(BOOL)animated;
-(void)_updateToolbarItemsFromViewController:(id)viewController animated:(BOOL)animated;
@end

@interface UIViewController (UINavigationControllerItem)
@property(readonly, retain, nonatomic) UINavigationController* navigationController;
@property(assign, nonatomic) BOOL hidesBottomBarWhenPushed;
@property(readonly, retain, nonatomic) UINavigationItem* navigationItem;
-(id)editButtonItem;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)editing;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)_toggleEditing:(id)editing;
-(BOOL)canHandleSnapbackIdentifier:(id)identifier animated:(BOOL)animated;
@end

@interface UIViewController (UITabBarControllerItem)
@property(readonly, retain, nonatomic) UITabBarController* tabBarController;
@property(retain, nonatomic) UITabBarItem* tabBarItem;
-(void)updateTabBarItemForViewController:(id)viewController;
-(id)_moreListTitle;
-(id)moreListImage;
-(id)moreListSelectedImage;
-(id)moreListTableCell;
@end

@interface UIViewController (PLImagePickerViewControllerInterface)
-(void)_setUseTelephonyUI:(BOOL)ui;
-(void)_setImagePickerMediaTypes:(id)types;
@end

@interface UIViewController (UIImagePickerControllerAdditions)
-(BOOL)_displaysFullScreen;
-(int)_imagePickerStatusBarMode;
@end
