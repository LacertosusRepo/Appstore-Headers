//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UISearchBarDelegate.h"

@class NSString, UIButton, UISearchBar, UIStackView;

@interface SPTSearch2SearchBar : UIView <UISearchBarDelegate>
{
    id <SPTSearch2SearchBarDelegate> _delegate;
    UISearchBar *_searchBar;
    UIButton *_cancelButton;
    UIStackView *_stackView;
}

@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak id <SPTSearch2SearchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)cancelButtonPressed;
- (void)setShowsCancelButton:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)becomeFirstResponder;
@property(copy, nonatomic) NSString *text;
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

