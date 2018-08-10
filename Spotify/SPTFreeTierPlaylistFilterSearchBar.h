//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GLUEStyleable.h"

@class GLUEAccessoryIconButton, NSString, UISearchBar, UIStackView;

@interface SPTFreeTierPlaylistFilterSearchBar : UIView <GLUEStyleable>
{
    UISearchBar *_searchBar;
    GLUEAccessoryIconButton *_contextMenuButton;
    UIStackView *_stackView;
    double _filterSearchBarHeight;
    UIView *_searchBarContainer;
}

@property(retain, nonatomic) UIView *searchBarContainer; // @synthesize searchBarContainer=_searchBarContainer;
@property(nonatomic) double filterSearchBarHeight; // @synthesize filterSearchBarHeight=_filterSearchBarHeight;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) GLUEAccessoryIconButton *contextMenuButton; // @synthesize contextMenuButton=_contextMenuButton;
@property(readonly, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)addLayoutConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

