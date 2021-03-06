//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBToolbarItemInspector : IBBoundInspector
{
    NSTextField *labelTextField;
    NSTextField *paletteLabelTextField;
    NSTextField *tagTextField;
    NSTextField *toolbarItemIdentifierField;
    NSTextField *visibilityPriorityTextField;
    NSComboBox *imageNameComboBox;
    NSButton *autovalidatesCheckBox;
    NSButton *selectableCheckBox;
    IBAutoCompletingComboBoxDataSource *imageDataSource;
}

- (void)refresh;
- (BOOL)anyAreStandard;
- (void)awakeFromNib;
- (void)dealloc;

@end