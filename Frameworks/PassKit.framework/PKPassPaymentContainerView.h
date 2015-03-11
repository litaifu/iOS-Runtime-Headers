/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSDictionary, NSMutableArray, NSString, PKAuthenticator, PKPassPaymentPayStateView, PKPassPaymentSummaryView, PKPaymentService, UIButton;

@interface PKPassPaymentContainerView : PKPassPaymentFooterContentView <PKPaymentServiceDelegate, PKAuthenticatorDelegate, PKPassPaymentSummaryViewDelegate, PKPassPaymentPayStateViewDelegate> {
    UIButton *_actionButton;
    PKAuthenticator *_authenticator;
    unsigned long long _authenticatorState;
    long long _currentPayState;
    unsigned long long _deactivationReasons;
    PKPassPaymentPayStateView *_payStateView;
    PKPaymentService *_paymentService;
    long long _pendingPayState;
    NSString *_pendingPayStateTextOverride;
    unsigned int _successAudioID;
    NSDictionary *_successVibrationPattern;
    PKPassPaymentSummaryView *_summaryView;
    NSMutableArray *_transitionCompletionHandlers;
    bool_authenticating;
    bool_inBackground;
    bool_isVisible;
    bool_presentingPasscode;
    bool_requiresPasscodeDismissal;
    bool_transitioning;
    bool_waitingForGlyphView;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void)_activateForPayment;
- (void)_applyLatestTransactionAndMessageToSummaryView;
- (void)_applyPayState:(long long)arg1 afterDelay:(double)arg2;
- (void)_applyPayState:(long long)arg1 withTextOverride:(id)arg2 completionHandler:(id)arg3;
- (void)_applyPayState:(long long)arg1 withTextOverride:(id)arg2;
- (void)_applyPayState:(long long)arg1;
- (void)_authorizeForPaymentWithCredential:(id)arg1;
- (void)_beginPasscodeOnlyAuthentication;
- (void)_beginPaymentAuthorization;
- (void)_beginPaymentAuthorizationWithImmediatePasscode:(bool)arg1;
- (id)_buttonForState:(long long)arg1;
- (id)_buttonWithTitle:(id)arg1 alignment:(long long)arg2 action:(SEL)arg3;
- (bool)_canAuthenticateWithPasscode;
- (bool)_canAuthenticateWithTouchID;
- (void)_deauthorizeForPayment;
- (id)_emphasisButtonForState:(long long)arg1;
- (void)_emphasizeStateIfPossible:(long long)arg1 withTextOverride:(id)arg2;
- (void)_endFingerprintAnimationWithSuccess:(bool)arg1 completion:(id)arg2;
- (void)_endPaymentAuthorization;
- (void)_endTransition:(bool)arg1;
- (void)_executeTransitionCompletionHandlers:(bool)arg1;
- (id)_filledButtonWithTitle:(id)arg1 alignment:(long long)arg2 action:(SEL)arg3;
- (void)_handleAddDeactivationReasonNotification:(id)arg1;
- (void)_handleEnterBackgroundNotification:(id)arg1;
- (void)_handleEnterForegroundNotification:(id)arg1;
- (void)_handleRemoveDeactivationReasonNotification:(id)arg1;
- (bool)_isDeactivatedWithReasons:(unsigned long long)arg1;
- (bool)_isForegroundActiveWithReasons:(unsigned long long)arg1;
- (bool)_isInBackgroundWithReasons:(unsigned long long)arg1;
- (bool)_isLifecycleNotificationRelevant:(id)arg1;
- (void)_lookupLatestMessageWithCompletion:(id)arg1;
- (void)_lookupLatestTransactionWithCompletion:(id)arg1;
- (void)_passcodeAuthenticationButtonPressed:(id)arg1;
- (void)_passcodeFallbackButtonPressed:(id)arg1;
- (void)_performAuthentication;
- (id)_preArmButtonTitle;
- (void)_prearmButtonPressed:(id)arg1;
- (void)_promoteToAuthorizedStateIfPossible;
- (void)_resetToIdleState;
- (void)_resetToIdleStateAfterDelay:(double)arg1 whileIgnoreField:(bool)arg2;
- (void)_resetToIdleStateAfterDelay:(double)arg1;
- (void)_resetToIdleStateWhileIgnoringField:(bool)arg1;
- (bool)_showSummaryState;
- (void)_startFingerprintAnimation;
- (void)_transitionToState:(long long)arg1 withTextOverride:(id)arg2 animated:(bool)arg3 completionHandler:(id)arg4;
- (void)_transitionViewsAnimated:(bool)arg1;
- (void)_updateAuthenticatorState;
- (void)authenticatorDidEncounterFingerOff:(id)arg1;
- (void)authenticatorDidEncounterFingerOn:(id)arg1;
- (void)authenticatorDidEncounterMatchMiss:(id)arg1;
- (void)dealloc;
- (void)didBecomeHiddenAnimated:(bool)arg1;
- (void)dismissPasscodeRemoteViewController;
- (id)initWithPass:(id)arg1;
- (void)layoutSubviews;
- (void)payStateView:(id)arg1 revealingCheckmark:(bool)arg2;
- (void)paymentDeviceDidEnterField;
- (void)paymentDeviceDidLeaveField;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifierDidCompleteTransaction:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidDeauthorize:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidFailTransaction:(id)arg1;
- (void)presentPasscodeRemoteViewControllerWithClassName:(id)arg1 serviceBundleIdentifier:(id)arg2 completionHandler:(id)arg3;
- (void)summaryView:(id)arg1 didDeleteMessage:(id)arg2;
- (void)willBecomeHiddenAnimated:(bool)arg1;
- (void)willBecomeVisibleAnimated:(bool)arg1;

@end