//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ECPagerLayer.h"

#import "ECEventHandlingDelegate.h"

@class CALayer, ECShadowTextLayer, ECTextInputLayer, NSObject<OS_dispatch_source>, NSString;

@interface ECSBLayer : ECPagerLayer <ECEventHandlingDelegate>
{
    CALayer *_searchBackgroundLayer;
    CALayer *_noResultsContainerLayer;
    ECShadowTextLayer *_noResultsLayer;
    NSString *_searchString;
    ECTextInputLayer *_searchTextInputLayer;
    double _zoomFactor;
    int _zoomStyle;
    float _scaleFactor;
    unsigned long long _numberOfRowsPerPage;
    unsigned long long _numberOfColumnsPerPage;
    NSObject<OS_dispatch_source> *_searchStringTimer;
    NSObject<OS_dispatch_source> *_pageChangeTimer;
    unsigned int _searchStringBeingSet:1;
    unsigned int _leftMouseDown:1;
    unsigned int _keyDownHandled:1;
    unsigned int _mouseDragged:1;
}

+ (void)calculateIconSize:(unsigned long long *)arg1 miniIconSize:(unsigned long long *)arg2 forBounds:(struct CGRect)arg3 andScaleFactor:(float)arg4 usingLeftMargin:(double)arg5 rightMargin:(double)arg6 topMargin:(double)arg7 bottomMargin:(double)arg8 zoomStyle:(int)arg9 zoomFactor:(double)arg10 withNumberOfRows:(unsigned long long)arg11 andColumns:(unsigned long long)arg12;
@property(nonatomic) unsigned long long numberOfColumnsPerPage; // @synthesize numberOfColumnsPerPage=_numberOfColumnsPerPage;
@property(nonatomic) unsigned long long numberOfRowsPerPage; // @synthesize numberOfRowsPerPage=_numberOfRowsPerPage;
@property(nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) int zoomStyle; // @synthesize zoomStyle=_zoomStyle;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(readonly, nonatomic) ECShadowTextLayer *noResultsLayer; // @synthesize noResultsLayer=_noResultsLayer;
@property(readonly, nonatomic) ECTextInputLayer *searchTextInputLayer; // @synthesize searchTextInputLayer=_searchTextInputLayer;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, nonatomic) CALayer *searchBackgroundLayer; // @synthesize searchBackgroundLayer=_searchBackgroundLayer;
- (void).cxx_destruct;
- (BOOL)dragExited:(id)arg1;
- (BOOL)dragEntered:(id)arg1;
- (BOOL)leftMouseUp:(id)arg1 inLayer:(id)arg2;
- (BOOL)leftMouseDown:(id)arg1 inLayer:(id)arg2;
- (BOOL)scrollWheel:(id)arg1;
- (BOOL)gesture:(id)arg1;
- (BOOL)leftMouseUp:(id)arg1;
- (BOOL)leftMouseDragged:(id)arg1;
- (BOOL)leftMouseDown:(id)arg1;
- (void)layout;
- (void)cancelTimers;
- (BOOL)keyUp:(id)arg1;
- (BOOL)keyDown:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCurrentPageIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) double adjustedBottomMargin; // @dynamic adjustedBottomMargin;
@property(readonly, nonatomic) double adjustedTopMargin; // @dynamic adjustedTopMargin;
@property(readonly, nonatomic) double adjustedRightMargin; // @dynamic adjustedRightMargin;
@property(readonly, nonatomic) double adjustedLeftMargin; // @dynamic adjustedLeftMargin;
- (void)setScrollValue:(double)arg1;
- (void)dealloc;
- (id)initWithPager:(id)arg1 scaleFactor:(float)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
