/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UISectionTable;

__attribute__((visibility("hidden")))
@interface UISectionIndex : UIControl {
@private
	UISectionTable* _sectionTable;
	CGPoint _lastMousePoint;
}
+(float)visibleWidth;
+(float)opaqueVisibleWidth;
-(id)_sectionTitles;
-(id)initWithSectionTable:(id)sectionTable;
-(void)drawRect:(CGRect)rect;
-(id)_titleForPoint:(CGPoint)point pastTop:(BOOL*)top pastBottom:(BOOL*)bottom;
-(void)_scrollToClosestSectionAtPoint:(CGPoint)point;
-(void)noteIndexTitlesDidChangeInSectionList:(id)noteIndexTitles;
-(BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;
-(BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;
-(BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;
-(BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;
-(void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;
-(void)endTrackingWithTouch:(id)touch withEvent:(id)event;
@end

