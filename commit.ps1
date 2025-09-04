Write-Host ""
    $commitMessage = Read-Host "Digite a mensagem do commit"

    git add .
    git commit -m "$commitMessage"
    git push origin main

    $width = 34
    function CenterText($text, $width) {
        $padding = [Math]::Max(0, ($width - $text.Length) / 2)
        return (" " * [Math]::Floor($padding)) + $text
    }

    Clear-Host
    Write-Host ("=" * $width) -ForegroundColor DarkCyan
    Write-Host (CenterText "Commit enviado com sucesso!" $width) -ForegroundColor Blue
    Write-Host ""
    Write-Host (CenterText "Mensagem" $width) -ForegroundColor Yellow
    Write-Host (CenterText $commitMessage $width) -ForegroundColor White
    Write-Host ("=" * $width) -ForegroundColor Blue