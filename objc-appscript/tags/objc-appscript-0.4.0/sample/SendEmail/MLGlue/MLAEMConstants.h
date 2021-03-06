/*
 * MLAEMConstants.h
 * 
 * /Applications/Mail.app
 * osaglue 0.3.2
 *
 */
#import "Appscript/Appscript.h"

// Type/Enum Names
enum {
	kMLMac = 'etit',
	kMLAll = 'hdal',
	kMLAllMessagesAndTheirAttachments = 'x9al',
	kMLAllMessagesButOmitAttachments = 'x9bo',
	kMLAnyRecipient = 'tanr',
	kMLApop = 'aapo',
	kMLAsk = 'ask ',
	kMLAttachmentsColumn = 'ecat',
	kMLBase = 'lsba',
	kMLBeginsWithValue = 'rqbw',
	kMLBlue = 'ccbl',
	kMLBuddyAvailabilityColumn = 'ecba',
	kMLCcHeader = 'tccc',
	kMLCustom = 'hdcu',
	kMLDateReceivedColumn = 'ecdr',
	kMLDateSentColumn = 'ecds',
	kMLDefault_ = 'hdde',
	kMLDetailed = 'lwdt',
	kMLDoNotKeepCopiesOfAnyMessages = 'x9no',
	kMLDoesContainValue = 'rqco',
	kMLDoesNotContainValue = 'rqdn',
	kMLEndsWithValue = 'rqew',
	kMLEqualToValue = 'rqie',
	kMLFlagsColumn = 'ecfl',
	kMLFromColumn = 'ecfr',
	kMLFromHeader = 'tfro',
	kMLGray = 'ccgy',
	kMLGreaterThanValue = 'rqgt',
	kMLGreen = 'ccgr',
	kMLHeaderKey = 'thdk',
	kMLImap = 'etim',
	kMLKerberos5 = 'axk5',
	kMLLessThanValue = 'rqlt',
	kMLMailboxColumn = 'ecmb',
	kMLMatchesEveryMessage = 'tevm',
	kMLMd5 = 'axmd',
	kMLMessageColor = 'eccl',
	kMLMessageContent = 'tmec',
	kMLMessageIsJunkMail = 'tmij',
	kMLMessageStatusColumn = 'ecms',
	kMLNo = 'no  ',
	kMLNoHeaders = 'hdnn',
	kMLNone = 'rqno',
	kMLNtlm = 'axnt',
	kMLNumberColumn = 'ecnm',
	kMLOneLevel = 'lsol',
	kMLOnlyMessagesIHaveRead = 'x9wr',
	kMLOrange = 'ccor',
	kMLOther = 'ccot',
	kMLPassword = 'axct',
	kMLPlainText = 'dmpt',
	kMLPop = 'etpo',
	kMLPurple = 'ccpu',
	kMLRed = 'ccre',
	kMLRichText = 'dmrt',
	kMLSenderIsInMyAddressBook = 'tsii',
	kMLSenderIsMemberOfGroup = 'tsim',
	kMLSenderIsNotInMyAddressBook = 'tsin',
	kMLSenderIsNotMemberOfGroup = 'tsig',
	kMLSizeColumn = 'ecsz',
	kMLSmtp = 'etsm',
	kMLStandard = 'lwst',
	kMLSubjectColumn = 'ecsu',
	kMLSubjectHeader = 'tsub',
	kMLSubtree = 'lsst',
	kMLToColumn = 'ecto',
	kMLToHeader = 'ttoo',
	kMLToOrCcHeader = 'ttoc',
	kMLYellow = 'ccye',
	kMLYes = 'yes ',
	kMLMIMEType = 'attp',
	kMLMacAccount = 'itac',
	kMLAccount = 'mact',
	kMLAccountDirectory = 'path',
	kMLAccountType = 'atyp',
	kMLAddress = 'radd',
	kMLAllConditionsMustBeMet = 'racm',
	kMLAllHeaders = 'alhe',
	kMLAlwaysBccMyself = 'abcm',
	kMLAlwaysCcMyself = 'accm',
	kMLApplication = 'capp',
	kMLApplicationVersion = 'apve',
	kMLAttachment = 'atts',
	kMLAttributeRun = 'catr',
	kMLAuthentication = 'paus',
	kMLBackgroundActivityCount = 'bthc',
	kMLBackgroundColor = 'mcol',
	kMLBccRecipient = 'brcp',
	kMLBigMessageWarningSize = 'bmws',
	kMLBounds = 'pbnd',
	kMLCcRecipient = 'crcp',
	kMLCharacter = 'cha ',
	kMLCheckSpellingWhileTyping = 'chsp',
	kMLChooseSignatureWhenComposing = 'cswc',
	kMLClass_ = 'pcls',
	kMLCloseable = 'hclb',
	kMLCollating = 'lwcl',
	kMLColor = 'colr',
	kMLColorMessage = 'rcme',
	kMLColorQuotedText = 'mcct',
	kMLCompactMailboxesWhenClosing = 'cwcm',
	kMLContainer = 'mbxc',
	kMLContent = 'ctnt',
	kMLCopies = 'lwcp',
	kMLCopyMessage = 'rcmb',
	kMLDateReceived = 'rdrc',
	kMLDateSent = 'drcv',
	kMLDefaultMessageFormat = 'demf',
	kMLDelayedMessageDeletionInterval = 'dmdi',
	kMLDeleteMailOnServer = 'dmos',
	kMLDeleteMessage = 'rdme',
	kMLDeleteMessagesWhenMovedFromInbox = 'dmwm',
	kMLDeletedStatus = 'isdl',
	kMLDeliveryAccount = 'dact',
	kMLDocument = 'docu',
	kMLDownloadHtmlAttachments = 'dhta',
	kMLDownloaded = 'atdn',
	kMLDraftsMailbox = 'drmb',
	kMLEmailAddresses = 'emad',
	kMLEmptyJunkMessagesFrequency = 'ejmf',
	kMLEmptyJunkMessagesOnQuit = 'ejmo',
	kMLEmptySentMessagesFrequency = 'esmf',
	kMLEmptySentMessagesOnQuit = 'esmo',
	kMLEmptyTrashFrequency = 'etrf',
	kMLEmptyTrashOnQuit = 'etoq',
	kMLEnabled = 'isac',
	kMLEndingPage = 'lwlp',
	kMLErrorHandling = 'lweh',
	kMLExpandGroupAddresses = 'exga',
	kMLExpression = 'rexp',
	kMLFaxNumber = 'faxn',
	kMLFetchInterval = 'affq',
	kMLFetchesAutomatically = 'saft',
	kMLFileName = 'atfn',
	kMLFixedWidthFont = 'mptf',
	kMLFixedWidthFontSize = 'ptfs',
	kMLFlaggedStatus = 'isfl',
	kMLFloating = 'isfl',
	kMLFont = 'font',
	kMLForwardMessage = 'rfad',
	kMLForwardText = 'rfte',
	kMLFrameworkVersion = 'frve',
	kMLFrontmost = 'pisf',
	kMLFullName = 'flln',
	kMLHeader = 'mhdr',
	kMLHeaderDetail = 'hedl',
	kMLHighlightSelectedThread = 'shht',
	kMLHighlightTextUsingColor = 'htuc',
	kMLHostName = 'ldsa',
	kMLId_ = 'ID  ',
	kMLImapAccount = 'iact',
	kMLInbox = 'inmb',
	kMLIncludeAllOriginalMessageText = 'iaoo',
	kMLIncludeWhenGettingNewMail = 'iwgm',
	kMLIndex = 'pidx',
	kMLItem = 'cobj',
	kMLJunkMailStatus = 'isjk',
	kMLJunkMailbox = 'jkmb',
	kMLLdapServer = 'ldse',
	kMLLevelOneQuotingColor = 'loqc',
	kMLLevelThreeQuotingColor = 'lhqc',
	kMLLevelTwoQuotingColor = 'lwqc',
	kMLMailAttachment = 'attc',
	kMLMailbox = 'mbxp',
	kMLMailboxListVisible = 'mlsh',
	kMLMarkFlagged = 'rmfl',
	kMLMarkRead = 'rmre',
	kMLMessage = 'mssg',
	kMLMessageCaching = 'msgc',
	kMLMessageFont = 'mmfn',
	kMLMessageFontSize = 'mmfs',
	kMLMessageId = 'meid',
	kMLMessageListFont = 'mmlf',
	kMLMessageListFontSize = 'mlfs',
	kMLMessageSignature = 'tnrg',
	kMLMessageSize = 'msze',
	kMLMessageViewer = 'mvwr',
	kMLMiniaturizable = 'ismn',
	kMLMiniaturized = 'pmnd',
	kMLModal = 'pmod',
	kMLModified = 'imod',
	kMLMoveDeletedMessagesToTrash = 'smdm',
	kMLMoveMessage = 'rtme',
	kMLName = 'pnam',
	kMLNewMailSound = 'mnms',
	kMLOutbox = 'oumb',
	kMLOutgoingMessage = 'bcke',
	kMLPagesAcross = 'lwla',
	kMLPagesDown = 'lwld',
	kMLParagraph = 'cpar',
	kMLPath = 'ppth',
	kMLPlaySound = 'rpso',
	kMLPopAccount = 'pact',
	kMLPort = 'port',
	kMLPreviewPaneIsVisible = 'mvpv',
	kMLPrimaryEmail = 'ueml',
	kMLPrintSettings = 'pset',
	kMLProperties = 'pALL',
	kMLQualifier = 'rqua',
	kMLQuoteOriginalMessage = 'inom',
	kMLReadStatus = 'isrd',
	kMLRecipient = 'rcpt',
	kMLRedirectMessage = 'rrad',
	kMLReplyText = 'rrte',
	kMLReplyTo = 'rpto',
	kMLRequestedPrintTime = 'lwqt',
	kMLResizable = 'prsz',
	kMLRule = 'rule',
	kMLRuleCondition = 'rucr',
	kMLRuleType = 'rtyp',
	kMLRunScript = 'rras',
	kMLSameReplyFormat = 'risf',
	kMLScope = 'ldsc',
	kMLSearchBase = 'ldsb',
	kMLSelectedMailboxes = 'msbx',
	kMLSelectedMessages = 'smgs',
	kMLSelectedSignature = 'sesi',
	kMLSelection = 'slct',
	kMLSender = 'sndr',
	kMLSentMailbox = 'stmb',
	kMLServerName = 'host',
	kMLShouldCopyMessage = 'rscm',
	kMLShouldMoveMessage = 'rstm',
	kMLShouldPlayOtherMailSounds = 'poms',
	kMLShowOnlineBuddyStatus = 'shsp',
	kMLSignature = 'situ',
	kMLSize = 'ptsz',
	kMLSmtpServer = 'dact',
	kMLSortColumn = 'mvsc',
	kMLSortedAscending = 'mvsr',
	kMLSource = 'raso',
	kMLStartingPage = 'lwfp',
	kMLStopEvaluatingRules = 'rser',
	kMLStoreDeletedMessagesOnServer = 'stos',
	kMLStoreDraftsOnServer = 'sdos',
	kMLStoreJunkMailOnServer = 'sjos',
	kMLStoreSentMessagesOnServer = 'ssos',
	kMLSubject = 'subj',
	kMLTargetPrinter = 'trpr',
	kMLText = 'ctxt',
	kMLTitled = 'ptit',
	kMLToRecipient = 'trcp',
	kMLTrashMailbox = 'trmb',
	kMLUnreadCount = 'mbuc',
	kMLUseAddressCompletion = 'usla',
	kMLUseFixedWidthFont = 'ufwf',
	kMLUserName = 'unme',
	kMLUsesSsl = 'usss',
	kMLVersion_ = 'vers',
	kMLVisible = 'pvis',
	kMLVisibleColumns = 'mvvc',
	kMLVisibleMessages = 'mvfm',
	kMLWasForwarded = 'isfw',
	kMLWasRedirected = 'isrc',
	kMLWasRepliedTo = 'isrp',
	kMLWindow = 'cwin',
	kMLWord = 'cwor',
	kMLZoomable = 'iszm',
	kMLZoomed = 'pzum',
};

enum {
	eMLMacAccounts = 'itac',
	eMLAccounts = 'mact',
	eMLApplications = 'capp',
	eMLAttachment = 'atts',
	eMLAttributeRuns = 'catr',
	eMLBccRecipients = 'brcp',
	eMLCcRecipients = 'crcp',
	eMLCharacters = 'cha ',
	eMLColors = 'colr',
	eMLContainers = 'mbxc',
	eMLDocuments = 'docu',
	eMLHeaders = 'mhdr',
	eMLImapAccounts = 'iact',
	eMLItems = 'cobj',
	eMLLdapServers = 'ldse',
	eMLMailAttachments = 'attc',
	eMLMailboxes = 'mbxp',
	eMLMessageViewers = 'mvwr',
	eMLMessages = 'mssg',
	eMLOutgoingMessages = 'bcke',
	eMLParagraphs = 'cpar',
	eMLPopAccounts = 'pact',
	eMLPrintSettings = 'pset',
	eMLRecipients = 'rcpt',
	eMLRuleConditions = 'rucr',
	eMLRules = 'rule',
	eMLSignatures = 'situ',
	eMLSmtpServers = 'dact',
	eMLText = 'ctxt',
	eMLToRecipients = 'trcp',
	eMLWindows = 'cwin',
	eMLWords = 'cwor',
	pMLMIMEType = 'attp',
	pMLAccount = 'mact',
	pMLAccountDirectory = 'path',
	pMLAccountType = 'atyp',
	pMLAddress = 'radd',
	pMLAllConditionsMustBeMet = 'racm',
	pMLAllHeaders = 'alhe',
	pMLAlwaysBccMyself = 'abcm',
	pMLAlwaysCcMyself = 'accm',
	pMLApplicationVersion = 'apve',
	pMLAuthentication = 'paus',
	pMLBackgroundActivityCount = 'bthc',
	pMLBackgroundColor = 'mcol',
	pMLBigMessageWarningSize = 'bmws',
	pMLBounds = 'pbnd',
	pMLCheckSpellingWhileTyping = 'chsp',
	pMLChooseSignatureWhenComposing = 'cswc',
	pMLClass_ = 'pcls',
	pMLCloseable = 'hclb',
	pMLCollating = 'lwcl',
	pMLColor = 'colr',
	pMLColorMessage = 'rcme',
	pMLColorQuotedText = 'mcct',
	pMLCompactMailboxesWhenClosing = 'cwcm',
	pMLContainer = 'mbxc',
	pMLContent = 'ctnt',
	pMLCopies = 'lwcp',
	pMLCopyMessage = 'rcmb',
	pMLDateReceived = 'rdrc',
	pMLDateSent = 'drcv',
	pMLDefaultMessageFormat = 'demf',
	pMLDelayedMessageDeletionInterval = 'dmdi',
	pMLDeleteMailOnServer = 'dmos',
	pMLDeleteMessage = 'rdme',
	pMLDeleteMessagesWhenMovedFromInbox = 'dmwm',
	pMLDeletedStatus = 'isdl',
	pMLDeliveryAccount = 'dact',
	pMLDocument = 'docu',
	pMLDownloadHtmlAttachments = 'dhta',
	pMLDownloaded = 'atdn',
	pMLDraftsMailbox = 'drmb',
	pMLEmailAddresses = 'emad',
	pMLEmptyJunkMessagesFrequency = 'ejmf',
	pMLEmptyJunkMessagesOnQuit = 'ejmo',
	pMLEmptySentMessagesFrequency = 'esmf',
	pMLEmptySentMessagesOnQuit = 'esmo',
	pMLEmptyTrashFrequency = 'etrf',
	pMLEmptyTrashOnQuit = 'etoq',
	pMLEnabled = 'isac',
	pMLEndingPage = 'lwlp',
	pMLErrorHandling = 'lweh',
	pMLExpandGroupAddresses = 'exga',
	pMLExpression = 'rexp',
	pMLFaxNumber = 'faxn',
	pMLFetchInterval = 'affq',
	pMLFetchesAutomatically = 'saft',
	pMLFileName = 'atfn',
	pMLFixedWidthFont = 'mptf',
	pMLFixedWidthFontSize = 'ptfs',
	pMLFlaggedStatus = 'isfl',
	pMLFloating = 'isfl',
	pMLFont = 'font',
	pMLForwardMessage = 'rfad',
	pMLForwardText = 'rfte',
	pMLFrameworkVersion = 'frve',
	pMLFrontmost = 'pisf',
	pMLFullName = 'flln',
	pMLHeader = 'rhed',
	pMLHeaderDetail = 'hedl',
	pMLHighlightSelectedThread = 'shht',
	pMLHighlightTextUsingColor = 'htuc',
	pMLHostName = 'ldsa',
	pMLId_ = 'ID  ',
	pMLInbox = 'inmb',
	pMLIncludeAllOriginalMessageText = 'iaoo',
	pMLIncludeWhenGettingNewMail = 'iwgm',
	pMLIndex = 'pidx',
	pMLJunkMailStatus = 'isjk',
	pMLJunkMailbox = 'jkmb',
	pMLLevelOneQuotingColor = 'loqc',
	pMLLevelThreeQuotingColor = 'lhqc',
	pMLLevelTwoQuotingColor = 'lwqc',
	pMLMailbox = 'mbxp',
	pMLMailboxListVisible = 'mlsh',
	pMLMarkFlagged = 'rmfl',
	pMLMarkRead = 'rmre',
	pMLMessageCaching = 'msgc',
	pMLMessageFont = 'mmfn',
	pMLMessageFontSize = 'mmfs',
	pMLMessageId = 'meid',
	pMLMessageListFont = 'mmlf',
	pMLMessageListFontSize = 'mlfs',
	pMLMessageSignature = 'tnrg',
	pMLMessageSize = 'msze',
	pMLMiniaturizable = 'ismn',
	pMLMiniaturized = 'pmnd',
	pMLModal = 'pmod',
	pMLModified = 'imod',
	pMLMoveDeletedMessagesToTrash = 'smdm',
	pMLMoveMessage = 'rtme',
	pMLName = 'pnam',
	pMLNewMailSound = 'mnms',
	pMLOutbox = 'oumb',
	pMLPagesAcross = 'lwla',
	pMLPagesDown = 'lwld',
	pMLPassword = 'macp',
	pMLPath = 'ppth',
	pMLPlaySound = 'rpso',
	pMLPort = 'port',
	pMLPreviewPaneIsVisible = 'mvpv',
	pMLPrimaryEmail = 'ueml',
	pMLProperties = 'pALL',
	pMLQualifier = 'rqua',
	pMLQuoteOriginalMessage = 'inom',
	pMLReadStatus = 'isrd',
	pMLRedirectMessage = 'rrad',
	pMLReplyText = 'rrte',
	pMLReplyTo = 'rpto',
	pMLRequestedPrintTime = 'lwqt',
	pMLResizable = 'prsz',
	pMLRuleType = 'rtyp',
	pMLRunScript = 'rras',
	pMLSameReplyFormat = 'risf',
	pMLScope = 'ldsc',
	pMLSearchBase = 'ldsb',
	pMLSelectedMailboxes = 'msbx',
	pMLSelectedMessages = 'smgs',
	pMLSelectedSignature = 'sesi',
	pMLSelection = 'slct',
	pMLSender = 'sndr',
	pMLSentMailbox = 'stmb',
	pMLServerName = 'host',
	pMLShouldCopyMessage = 'rscm',
	pMLShouldMoveMessage = 'rstm',
	pMLShouldPlayOtherMailSounds = 'poms',
	pMLShowOnlineBuddyStatus = 'shsp',
	pMLSize = 'ptsz',
	pMLSortColumn = 'mvsc',
	pMLSortedAscending = 'mvsr',
	pMLSource = 'raso',
	pMLStartingPage = 'lwfp',
	pMLStopEvaluatingRules = 'rser',
	pMLStoreDeletedMessagesOnServer = 'stos',
	pMLStoreDraftsOnServer = 'sdos',
	pMLStoreJunkMailOnServer = 'sjos',
	pMLStoreSentMessagesOnServer = 'ssos',
	pMLSubject = 'subj',
	pMLTargetPrinter = 'trpr',
	pMLTitled = 'ptit',
	pMLTrashMailbox = 'trmb',
	pMLUnreadCount = 'mbuc',
	pMLUseAddressCompletion = 'usla',
	pMLUseFixedWidthFont = 'ufwf',
	pMLUserName = 'unme',
	pMLUsesSsl = 'usss',
	pMLVersion_ = 'vers',
	pMLVisible = 'pvis',
	pMLVisibleColumns = 'mvvc',
	pMLVisibleMessages = 'mvfm',
	pMLWasForwarded = 'isfw',
	pMLWasRedirected = 'isrc',
	pMLWasRepliedTo = 'isrp',
	pMLWindow = 'cwin',
	pMLZoomable = 'iszm',
	pMLZoomed = 'pzum',
};

enum {
	ecMLGetURL = 'emal',
	eiMLGetURL = 'emtg',
};

enum {
	ecMLActivate = 'misc',
	eiMLActivate = 'actv',
};

enum {
	ecMLBounce = 'emal',
	eiMLBounce = 'bcms',
};

enum {
	ecMLCheckForNewMail = 'emal',
	eiMLCheckForNewMail = 'chma',
	epMLFor_ = 'acna',
};

enum {
	ecMLClose = 'core',
	eiMLClose = 'clos',
	epMLSaving = 'savo',
	epMLSavingIn = 'kfil',
};

enum {
	ecMLCount = 'core',
	eiMLCount = 'cnte',
	epMLEach = 'kocl',
};

enum {
	ecMLDelete = 'core',
	eiMLDelete = 'delo',
};

enum {
	ecMLDuplicate = 'core',
	eiMLDuplicate = 'clon',
	epMLTo = 'insh',
};

enum {
	ecMLExists = 'core',
	eiMLExists = 'doex',
};

enum {
	ecMLExtractAddressFrom = 'emal',
	eiMLExtractAddressFrom = 'eaua',
};

enum {
	ecMLExtractNameFrom = 'emal',
	eiMLExtractNameFrom = 'eafn',
};

enum {
	ecMLForward = 'emal',
	eiMLForward = 'fwms',
	epMLOpeningWindow = 'ropw',
};

enum {
	ecMLGet = 'core',
	eiMLGet = 'getd',
};

enum {
	ecMLImportMailMailbox = 'emal',
	eiMLImportMailMailbox = 'immx',
	epMLAt = 'mbpt',
};

enum {
	ecMLLaunch = 'ascr',
	eiMLLaunch = 'noop',
};

enum {
	ecMLMailto = 'emal',
	eiMLMailto = 'emto',
};

enum {
	ecMLMake = 'core',
	eiMLMake = 'crel',
// 	epMLAt = 'insh',
	epMLNew_ = 'kocl',
	epMLWithData = 'data',
	epMLWithProperties = 'prdt',
};

enum {
	ecMLMove = 'core',
	eiMLMove = 'move',
// 	epMLTo = 'insh',
};

enum {
	ecMLOpen = 'aevt',
	eiMLOpen = 'odoc',
};

enum {
	ecMLOpenLocation = 'GURL',
	eiMLOpenLocation = 'GURL',
	epMLWindow = 'WIND',
};

enum {
	ecMLPerformMailActionWithMessages = 'emal',
	eiMLPerformMailActionWithMessages = 'cpma',
	epMLForRule = 'pmar',
	epMLInMailboxes = 'pmbx',
};

enum {
	ecMLPrint = 'aevt',
	eiMLPrint = 'pdoc',
	epMLPrintDialog = 'pdlg',
// 	epMLWithProperties = 'prdt',
};

enum {
	ecMLQuit = 'aevt',
	eiMLQuit = 'quit',
// 	epMLSaving = 'savo',
};

enum {
	ecMLRedirect = 'emal',
	eiMLRedirect = 'rdms',
// 	epMLOpeningWindow = 'ropw',
};

enum {
	ecMLReopen = 'aevt',
	eiMLReopen = 'rapp',
};

enum {
	ecMLReply = 'emal',
	eiMLReply = 'rpms',
// 	epMLOpeningWindow = 'ropw',
	epMLReplyToAll = 'rpal',
};

enum {
	ecMLRun = 'aevt',
	eiMLRun = 'oapp',
};

enum {
	ecMLSave = 'core',
	eiMLSave = 'save',
	epMLAs = 'fltp',
	epMLIn = 'kfil',
};

enum {
	ecMLSend_ = 'emsg',
	eiMLSend_ = 'send',
};

enum {
	ecMLSet = 'core',
	eiMLSet = 'setd',
// 	epMLTo = 'data',
};

enum {
	ecMLSynchronize = 'emal',
	eiMLSynchronize = 'syac',
	epMLWith = 'acna',
};

